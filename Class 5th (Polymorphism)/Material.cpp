#include <iostream>
#include "Material.h"

using namespace std;

void Material::Describe()
{
	cout << "This is a Material" << endl;
}

void Material::Promote()
{
	cout << "the material had been enhanced" << endl;
}

Material::~Material()
{
	cout << "Release a Material\n" << endl;
}