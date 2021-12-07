#include "figure_interface.h"

point_t IFigure::rotatePoint_(const point_t& point, const point_t& centerPoint, const double& angle)
{
	const double& angleDegree = toDegree_(angle);
	return point_t(
		centerPoint.first + (point.first - centerPoint.first) * cos(angleDegree)
		- (point.second - centerPoint.second) * sin(angleDegree),
		centerPoint.second + (point.first - centerPoint.first) * sin(angleDegree)
		+ (point.second - centerPoint.second) * cos(angleDegree));
}

point_t IFigure::movePoint_(const point_t& point,
                            const double& x,
                            const double& y)
{
	return point_t(point.first + x, point.second + y);
}

double IFigure::toDegree_(const double& radianValue)
{
	return radianValue * kMathPi / 180.0;
}
