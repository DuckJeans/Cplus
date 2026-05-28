#include <iostream>
#include "Publisher.h"

using namespace std;

void Publisher::Send(int frequency)
{
	cout << "Send -> frequency" << endl;

	cout << "frequency : " << frequency << endl;
}

void Publisher::Send(const char* message)
{
	cout << "Send -> message" << endl;

	cout << "message : " << message << endl;
}

void Publisher::Send(const char* message, int frequency)
{
	cout << "Send -> message,frequency" << endl;

	cout << "frequency,message : " << frequency <<  ","  << message << endl;
}
