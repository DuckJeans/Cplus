#pragma once
#include "Item.h"
#include "stdafx.h"

class Antidote : public Item
{
public:
	virtual void Use() override;

	virtual ~Antidote();
};

