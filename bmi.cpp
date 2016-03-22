#include "bmi.h"

Bmi::Bmi(float h,float m)
{
	setHeight(h);
	setMass(m);
}
void Bmi::setHeight(float h)
{
	height=h/100;
}
void Bmi::setMass(float m)
{
	mass=m;
}
float Bmi::getHeight()
{
	return height;
}
float Bmi::getMass()
{
	return mass;
}
float Bmi::getBmi(float h,float m)
{
	float bmi;
	bmi = m/(h*h);
	return bmi;
}
string Bmi::category(float x)
{
	if(x<15)
		return "Very severely underweight";
	else if(x<16)
		return "Severely underweight";
	else if(x<18.5)
		return "Underweight";
	else if(x<25)
		return "Normal";
	else if(x<30)
		return "Overweight";
	else if(x<35)
		return "Obese Class I(Moderately obese)";
	else if(x<40)
		return "Obese Class II(Severey obese)";
	else
		return "Obese Class III(Very severely obese)";
}
