#include "Platinum.h"

Platinum::Platinum()
{
	weight = 2.5f;
	brightness = 3.5f;
	name = "Platinum";
}

void Platinum::Describe()
{
	cout << "Name : " << name << endl;
	cout << "Weight : " << weight << "g" << endl;
	cout << "Brightness : " << brightness << endl;
}

void Platinum::Promote()
{
	cout << "Gnar" << endl;
	cout << "Eternals Capsule" << endl;
	cout << "Platinum Boader\n" << endl;
}