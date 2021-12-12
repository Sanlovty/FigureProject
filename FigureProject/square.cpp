#include "square.h"

bool Square::isCorrectFigure_() const
{
	return leftTop_.first == leftBottom_.first &&
		leftTop_.second == rightTop_.second &&
		rightTop_.first == rightBottom_.first &&
		leftBottom_.second == rightBottom_.second &&
		leftTop_.second > leftBottom_.second &&
		rightBottom_.first > leftBottom_.first &&
		getHeight() == getWidth();
}


Square::Square(const double& leftTopX,
               const double& leftTopY,
               const double& rightTopX,
               const double& rightTopY,
               const double& rightBottomX,
               const double& rightBottomY,
               const double& leftBottomX,
               const double& leftBottomY) :
	leftTop_(point_t(leftTopX, leftTopY)),
	rightTop_(point_t(rightTopX, rightTopY)),
	rightBottom_(point_t(rightBottomX, rightBottomY)),
	leftBottom_(point_t(leftBottomX, leftBottomY))
{
	if (!isCorrectFigure_())
	{
		throw exception("Bad Square parameters");
	}
}

Square::Square(const point_t& leftTop,
               const point_t& rightTop,
               const point_t& rightBottom,
               const point_t& leftBottom) :
	leftTop_(leftTop),
	rightTop_(rightTop),
	rightBottom_(rightBottom),
	leftBottom_(leftBottom)
{
	if (!isCorrectFigure_())
	{
		throw exception("Bad Square parameters");
	}
}

void Square::rotate(const double& angle)
{
	const point_t center = getCenter();
	leftTop_ = rotatePoint_(leftTop_, center, angle);
	rightTop_ = rotatePoint_(rightTop_, center, angle);
	rightBottom_ = rotatePoint_(rightBottom_, center, angle);
	leftBottom_ = rotatePoint_(leftBottom_, center, angle);
}

void Square::move(const double& x, const double& y)
{
	leftTop_ = movePoint_(leftTop_, x, y);
	rightTop_ = movePoint_(rightTop_, x, y);
	rightBottom_ = movePoint_(rightBottom_, x, y);
	leftBottom_ = movePoint_(leftBottom_, x, y);
}

void Square::resize(const double& multiplier)
{
	if (multiplier <= 0.0)
	{
		throw exception("Multiplier must be positive");
	}
	setHeight(getHeight() * multiplier);
	setWidth(getWidth() * multiplier);
}

void Square::setHeight(const double& height)
{
	if (height <= 0)
	{
		throw exception("height must be positive number");
	}
	leftTop_.second = rightTop_.second = leftBottom_.second + height;
}

void Square::setWidth(const double& width)
{
	if (width <= 0)
	{
		throw exception("height must be positive number");
	}
	rightBottom_.first = rightTop_.first = leftBottom_.first + width;
}

point_t Square::getLeftTop() const
{
	return leftTop_;
}

point_t Square::getRightTop() const
{
	return rightTop_;
}

point_t Square::getRightBottom() const
{
	return rightBottom_;
}

point_t Square::getLeftBottom() const
{
	return leftBottom_;
}

double Square::getHeight() const
{
	return sqrt(
		(leftTop_.second - leftBottom_.second) * (leftTop_.second - leftBottom_.second)
		+ (leftTop_.first - leftBottom_.first) * (leftTop_.first - leftBottom_.first));
}

double Square::getWidth() const
{
	return sqrt(
		(leftTop_.second - rightTop_.second) * (leftTop_.second - rightTop_.second)
		+ (leftTop_.first - rightTop_.first) * (leftTop_.first - rightTop_.first));
}

point_t Square::getCenter() const
{
	return point_t((leftTop_.first + rightTop_.first) / 2, (leftTop_.second + leftBottom_.second) / 2);
}
