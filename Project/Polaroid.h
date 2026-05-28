#pragma once
#include "Item.h"
#include "stdafx.h"

class Polaroid : public Item
{
public:
	virtual void Use() override;

	virtual ~Polaroid();
};

