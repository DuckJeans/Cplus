#pragma once
class Item
{
private:
	const char* name;

public:
	Item();

	virtual ~Item() {}

	virtual void Use() = 0;
};