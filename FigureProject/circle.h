#ifndef CIRCLE_H
#define CIRCLE_H
#include "header.h"

class Circle
{
protected:
	double radius_;
	point_t center_;

	bool isCorrectFigure_() const;
public:
	Circle(const double& x, const double& y, const double& radius);
	Circle(const point_t& center, const double& radius);


	void move(const double& x, const double& y);
	void resize(const double& multiplier);

	void setRadius(const double& radius);
	point_t getCenter() const;
	double getRadius() const;
};

#endif
