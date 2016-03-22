#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bmi.h"
using namespace std;

int main()
{
	string num;
	float height, mass,BodyMass;
	ifstream readFile("file.in",ios::in);
	if(!readFile)
	{
		cerr << "Failed opening" <<endl;
		exit(1);
	}
	ofstream writeFile("file.out",ios::out);
	if(!writeFile)
	{
		cerr << "Failed opening" <<endl;
		exit(1);
	}
	while(readFile >> height >> mass)
	{
		if(height==0 && mass==0)
			break;
		Bmi BMI(height,mass);
		BodyMass=BMI.getBmi(BMI.getHeight(),BMI.getMass());
		cout << height << "\t" << mass << "\t" << BodyMass << "\t" << BMI.category(BodyMass) << endl;
		writeFile << BodyMass << "\t" << BMI.category(BodyMass) << endl;
	}
	return 0;
}
