#include "figure_interface.h"

point_t IFigure::rotatePoint_(const point_t& point, const point_t& centerPoint, const double& angle)
{
	return point_t(
		centerPoint.first + (point.first - centerPoint.first) * cos(angle)
		- (point.second - centerPoint.second) * sin(angle),
		centerPoint.second + (point.first - centerPoint.first) * sin(angle)
		+ (point.second - centerPoint.second) * cos(angle));
}

point_t IFigure::movePoint_(const point_t& point,
                            const double& x,
                            const double& y)
{
	return point_t(point.first + x, point.second + y);
}
