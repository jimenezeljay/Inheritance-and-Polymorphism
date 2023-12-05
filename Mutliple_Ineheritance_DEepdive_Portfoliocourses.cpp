#include <iostream>

using namespace std;

class CommonBaseClass
{
public:
    int common_value;

    //default constructor
    CommonBaseClass() : common_value(-99) {}
    CommonBaseClass(int common_value) : common_value(common_value) {}
};



class BaseClass1 : virtual public CommonBaseClass
{
public:

    int value;

    BaseClass1() : CommonBaseClass(100) {}

    void function1()
    {
        cout<< "Function1 BaseClass1" <<endl;
    }
};

class BaseClass2 : virtual public CommonBaseClass//clears the ambiguity in one common base class instead of 2
{
public:

        BaseClass2() : CommonBaseClass(200) {}


    int value;

    void function1()
    {
        cout<< "Function1 BaseClass2" <<endl;
    }
};

class DerivedClass : public BaseClass1, public BaseClass2
{
public:
    
    void function1()
    {
        BaseClass1::function1();
    }

    DerivedClass() : CommonBaseClass(999) {}
    
};



int main()
{
    DerivedClass derived;

    cout<< "common value: " <<derived.common_value <<endl;

    derived.BaseClass2::value = 20;

    derived.function1();


    return 0;
}