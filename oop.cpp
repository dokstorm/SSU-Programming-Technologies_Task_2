#include "oop.h"

using namespace std;

Base::Base()
{
    cout << "Construct Base object\n";
}

Base::~Base()
{
     cout << "Destruct Base object\n";
}

void Base::func() const
{
    cout << "Function func() of class Base\n";
}

Child::Child()
{
    cout << "Construct Child object\n";
}
Child::~Child()
{
     cout << "Destruct Child object\n";
}

void Child::func() const
{
    cout << "Function func() of class Child\n";
}

void Function(const Base &obj)
{
    cout << "* Call method func() for object obj" << endl;
    obj.func();
}
