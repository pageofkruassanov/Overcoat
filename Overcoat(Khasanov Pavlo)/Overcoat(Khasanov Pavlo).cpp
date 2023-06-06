#include "Overcoat.h"

int main()
{
    Overcoat cl1(10, "hoodie", 155);
    Overcoat cl2(4, "cap", 30);
    Overcoat cl3;
    cl3 = cl1;
    cout << (cl1 == cl3) << endl;
    cout << (cl2 > cl1);
}