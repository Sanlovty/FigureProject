#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "figure_interface.h"

class Rectangle : public IFigure
{
	point_t leftTop_;
	point_t rightTop_;
	point_t rightBottom_;
	point_t leftBottom_;
public:
	Rectangle();
	Rectangle(const double& leftTopX, const double& leftTopY,
	          const double& rightTopX, const double& rightTopY,
	          const double& rightBottomX, const double& rightBottomY,
	          const double& leftBottomX, const double& leftBottomY);
	Rectangle(const point_t& leftTop, const point_t& rightTop,
	          const point_t& rightBottom, const point_t& leftBottom);

	void rotate(const double& angle) override;
	void move(const double& x, const double& y) override;
	void resize(const double& multiplier) override;

	void setHeight(const double& height);
	void setWidth(const double& width);

	double getHeight() const;
	double getWidth() const;
	point_t getCenter() const override;
};

#endif
