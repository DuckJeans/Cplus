#pragma once
class Item
{
private:
	const char* name;

public:
	Item();

	virtual void Use() = 0;

	virtual ~Item();
};