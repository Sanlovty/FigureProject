#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "header.h"

class Rectangle
{
	point_t leftTop_;
	point_t rightTop_;
	point_t rightBottom_;
	point_t leftBottom_;

	bool isCorrectFigure_() const;
public:
	Rectangle(const double& leftTopX, const double& leftTopY,
	          const double& rightTopX, const double& rightTopY,
	          const double& rightBottomX, const double& rightBottomY,
	          const double& leftBottomX, const double& leftBottomY);
	Rectangle(const point_t& leftTop, const point_t& rightTop,
	          const point_t& rightBottom, const point_t& leftBottom);

	void rotate(const double& angle);
	void move(const double& x, const double& y);
	void resize(const double& multiplier);

	void setHeight(const double& height);
	void setWidth(const double& width);

	point_t getLeftTop() const;
	point_t getRightTop() const;
	point_t getRightBottom() const;
	point_t getLeftBottom() const;

	double getHeight() const;
	double getWidth() const;
	point_t getCenter() const;
};

#endif
