#include "Overcoat.h"

Overcoat::Overcoat(int amount, const char* clothes, int price)
{
	if (amount >= 1 && strlen(clothes) >= 1 && price >= 1) {
		this->amount = amount;
		this->price = price;
		this->clothes = new char[strlen(clothes) + 1];
		strcpy_s(this->clothes, strlen(clothes) + 1, clothes);

	}
	else {
		this->amount = 1;
		this->price = -1;
		this->clothes = new char [5] {"none"};
	}
}

bool Overcoat::operator==(const Overcoat& cl)
{
	return !(strcmp(this->clothes, cl.clothes));
}

bool Overcoat::operator>(const Overcoat& cl)
{
	return this->price > cl.price;
}

Overcoat& Overcoat::operator=(const Overcoat& cl)
{
	delete[] this->clothes;
	clothes = new char[strlen(cl.clothes) + 1];
	strcpy_s(this->clothes, strlen(cl.clothes) + 1, cl.clothes);

	this->amount = cl.amount;
	this->price = cl.price;
	return *this;
}

Overcoat::~Overcoat()
{
	if (amount > 0 && clothes != nullptr)
		delete[] clothes;
}
