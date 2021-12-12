#include "circle.h"


bool Circle::isCorrectFigure_() const
{
	return radius_ >= 0.0;
}

Circle::Circle(const double& x,
               const double& y,
               const double& radius) :
	center_(point_t(x, y))
{
	if (radius <= 0.0)
	{
		throw exception("Radius must be positive number");
	}
	radius_ = radius;
}

Circle::Circle(const point_t& center,
               const double& radius) :
	center_(center)
{
	if (radius <= 0.0)
	{
		throw exception("Radius must be positive number");
	}
	radius_ = radius;
}

void Circle::setRadius(const double& radius)
{
	if (radius <= 0.0)
	{
		throw exception("Radius must be positive number");
	}
	radius_ = radius;
}

point_t Circle::getCenter() const
{
	return center_;
}

double Circle::getRadius() const
{
	return radius_;
}

void Circle::move(const double& x, const double& y)
{
	center_.first += x;
	center_.second += y;
}

void Circle::resize(const double& multiplier)
{
	if (multiplier <= 0.0)
	{
		throw exception("Multiplier must be positive number");
	}
	radius_ *= multiplier;
}
