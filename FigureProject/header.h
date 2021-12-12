#ifndef HEADER_H
#define HEADER_H
#include <exception>
#include <utility>

using std::exception;
using point_t = std::pair<double, double>;
const double kMathPi = 3.14159265358979323846;

inline point_t movePoint_(const point_t& point,
                          const double& x,
                          const double& y)
{
	return point_t(point.first + x, point.second + y);
}

inline double toDegree_(const double& radianValue)
{
	return radianValue * kMathPi / 180.0;
}

inline point_t rotatePoint_(const point_t& point, const point_t& centerPoint, const double& angle)
{
	const double& angleDegree = toDegree_(angle);
	return point_t(
		centerPoint.first + (point.first - centerPoint.first) * cos(angleDegree)
		- (point.second - centerPoint.second) * sin(angleDegree),
		centerPoint.second + (point.first - centerPoint.first) * sin(angleDegree)
		+ (point.second - centerPoint.second) * cos(angleDegree));
}

#endif
