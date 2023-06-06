#pragma once

#include <iostream>

using namespace std;

class Overcoat
{
private:
	char* clothes;
	int amount;
	int price;
public:
	Overcoat() : Overcoat(1, "none", -1) {};
	Overcoat(int amount, const char* clothes, int price);

	bool operator==(const Overcoat& cl);
	bool operator>(const Overcoat& cl);
	Overcoat& operator=(const Overcoat& cl);

	~Overcoat();
};

