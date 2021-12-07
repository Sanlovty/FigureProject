#ifndef CIRCLE_H
#define CIRCLE_H
#include "figure_interface.h"

class Circle : public IFigure
{
protected:
	double radius_;
	point_t center_;

	void rotate(const double& angle) override;
	bool isCorrectFigure_() override;
public:
	Circle(const double& x, const double& y, const double& radius);
	Circle(const point_t& center, const double& radius);


	void move(const double& x, const double& y) override;
	void resize(const double& multiplier) override;

	void setRadius(const double& radius);
	point_t getCenter() const override;
	double getRadius() const;
};

#endif
