#include "square.h"

bool Square::isCorrectFigure_()
{
	return leftTop_.first == leftBottom_.first &&
		leftTop_.second == rightTop_.second &&
		rightTop_.first == rightBottom_.first &&
		leftBottom_.second == rightBottom_.second &&
		leftTop_.second > leftBottom_.second &&
		rightBottom_.first > leftBottom_.first &&
		getHeight() == getWidth();
}

Square::Square() : Rectangle()
{
	if (!Square::isCorrectFigure_())
	{
		throw exception("Bad square parameters");
	}
}

Square::Square(const double& leftTopX,
               const double& leftTopY,
               const double& rightTopX,
               const double& rightTopY,
               const double& rightBottomX,
               const double& rightBottomY,
               const double& leftBottomX,
               const double& leftBottomY) :
	Rectangle(leftTopX,
	          leftTopY,
	          rightTopX,
	          rightTopY,
	          rightBottomX,
	          rightBottomY,
	          leftBottomX,
	          leftBottomY)
{
	if (!Square::isCorrectFigure_())
	{
		throw exception("Bad square parameters");
	}
}

Square::Square(const point_t& leftTop,
               const point_t& rightTop,
               const point_t& rightBottom,
               const point_t& leftBottom) :
	Rectangle(leftTop,
	          rightTop,
	          rightBottom,
	          leftBottom)
{
	if (!Square::isCorrectFigure_())
	{
		throw exception("Bad square parameters");
	}
}
