#ifndef SQUARE_H
#define SQUARE_H
#include "rectangle.h"

class Square : public Rectangle
{
protected:
	bool isCorrectFigure_() override;
public:
	Square(const double& leftTopX, const double& leftTopY,
	       const double& rightTopX, const double& rightTopY,
	       const double& rightBottomX, const double& rightBottomY,
	       const double& leftBottomX, const double& leftBottomY);
	Square(const point_t& leftTop, const point_t& rightTop,
	       const point_t& rightBottom, const point_t& leftBottom);
};

#endif
