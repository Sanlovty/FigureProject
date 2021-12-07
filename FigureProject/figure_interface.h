#ifndef FIGURE_INTERFACE_H
#define FIGURE_INTERFACE_H
#include "header.h"

class IFigure
{
protected:
	static point_t rotatePoint_(const point_t& point, const point_t& centerPoint, const double& angle);
	static point_t movePoint_(const point_t& point, const double& x, const double& y);
	static double toDegree_(const double& radianValue);
public:
	virtual void rotate(const double& angle) = 0;
	virtual void move(const double& x, const double& y) = 0;
	virtual void resize(const double& multiplier) = 0;
	virtual point_t getCenter() const = 0;
};

#endif
