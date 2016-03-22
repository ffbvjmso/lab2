#include <string>
using namespace std;
class Bmi{
	public:
		Bmi(float h,float m);
		void setHeight(float h);
		void setMass(float m);
		float getHeight();
		float getMass();
		float getBmi(float h,float m);
		string category(float x);
	private:
		float height;
		float mass;
};
