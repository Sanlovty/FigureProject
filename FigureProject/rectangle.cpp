#include "rectangle.h"

bool Rectangle::isCorrectFigure_()
{
	return leftTop_.first == leftBottom_.first &&
		leftTop_.second == rightTop_.second &&
		rightTop_.first == rightBottom_.first &&
		leftBottom_.second == rightBottom_.second &&
		leftTop_.second > leftBottom_.second &&
		rightBottom_.first > leftBottom_.first;
}


Rectangle::Rectangle(const double& leftTopX,
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
	if (!Rectangle::isCorrectFigure_())
	{
		throw exception("Bad rectangle parameters");
	}
}

Rectangle::Rectangle(const point_t& leftTop,
                     const point_t& rightTop,
                     const point_t& rightBottom,
                     const point_t& leftBottom) :
	leftTop_(leftTop),
	rightTop_(rightTop),
	rightBottom_(rightBottom),
	leftBottom_(leftBottom)
{
	if (!Rectangle::isCorrectFigure_())
	{
		throw exception("Bad rectangle parameters");
	}
}

void Rectangle::rotate(const double& angle)
{
	const point_t center = getCenter();
	leftTop_ = rotatePoint_(leftTop_, center, angle);
	rightTop_ = rotatePoint_(rightTop_, center, angle);
	rightBottom_ = rotatePoint_(rightBottom_, center, angle);
	leftBottom_ = rotatePoint_(leftBottom_, center, angle);
}

void Rectangle::move(const double& x, const double& y)
{
	leftTop_ = movePoint_(leftTop_, x, y);
	rightTop_ = movePoint_(rightTop_, x, y);
	rightBottom_ = movePoint_(rightBottom_, x, y);
	leftBottom_ = movePoint_(leftBottom_, x, y);
}

void Rectangle::resize(const double& multiplier)
{
	if (multiplier <= 0.0)
	{
		throw exception("Multiplier must be positive");
	}
	setHeight(getHeight() * multiplier);
	setWidth(getWidth() * multiplier);
}

void Rectangle::setHeight(const double& height)
{
	if (height <= 0)
	{
		throw exception("height must be positive number");
	}
	leftTop_.second = rightTop_.second = leftBottom_.second + height;
}

void Rectangle::setWidth(const double& width)
{
	if (width <= 0)
	{
		throw exception("height must be positive number");
	}
	rightBottom_.first = rightTop_.first = leftBottom_.first + width;
}

point_t Rectangle::getLeftTop() const
{
	return leftTop_;
}

point_t Rectangle::getRightTop() const
{
	return rightTop_;
}

point_t Rectangle::getRightBottom() const
{
	return rightBottom_;
}

point_t Rectangle::getLeftBottom() const
{
	return leftBottom_;
}

double Rectangle::getHeight() const
{
	return abs(leftTop_.second - leftBottom_.second);
}

double Rectangle::getWidth() const
{
	return abs(leftTop_.first - rightTop_.first);
}

point_t Rectangle::getCenter() const
{
	return point_t((leftTop_.first + rightTop_.first) / 2, (leftTop_.second + leftBottom_.second) / 2);
}
