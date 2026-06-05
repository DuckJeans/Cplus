#pragma once
#include "Material.h"

class Platinum : public Material
{
private:
	float brightness;

public:
	Platinum();

	void Describe();

	virtual void Promote() override;

	~Platinum();
};