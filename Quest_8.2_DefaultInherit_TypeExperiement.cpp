#include <iostream>

//base Class
class BaseClass 
{
/*
public inherit: ALL public memebers of 'BaseClass' remain 'public' in the 'Derived Class'

All protected members of the base class remain protected in the derived class. 

Private members of the base class remain inaccessible in 'Derived CLass

                            |
                            |
                            |
                            V
*/
public:
    void publicMethod() //function with output
    {
        std::cout << "Public method from BaseClass" << std::endl;
    }

/*
protected inherit: All public and protected members of the base class 
become protected in the derived class. 

Private members of the base class remain inaccessible in the derived class.

                            |
                            |
                            |
                            V
*/

protected:
    void protectedMethod() //function with output
    {
        std::cout << "Protected method from BaseClass" << std::endl;
    }

/*
private inherit: All public and protected members of the base class become private in the derived class. 

Private members of the base class remain inaccessible in the derived class.

                            |
                            |
                            |
                            V
*/

private:
    void privateMethod() //function with output
    {
        std::cout << "Private method from BaseClass" << std::endl;
    }
};

// Derived Class without explicitly specifying inheritance type
class DerivedClass : BaseClass 
{
public:
    void testAccess() 
    {
        publicMethod();     //accessing public method from BaseClass
        protectedMethod();  //accessing protected method from BaseClass
        //privateMethod(); //uncommenting this line will result in a compile-time error because it's specificer is 'private'!
    }
};

int main() 
{
    DerivedClass derivedObj;
    derivedObj.testAccess(); //calling the 'testAccess' method to test access to inherited members

    return 0;
}

/*
Observations:

1( The publicMethod() and protectedMethod() from BaseClass are accessible within DerivedClass.

2( Trying to access privateMethod() from DerivedClass results in a compile-time error because 
    private members of the base class are not accessible in derived classes by default.

3(This behavior aligns with the default behavior of public inheritance where public and 
    protected members remain accessible as such in the derived class, and private members remain inaccessible in the derived class.










*/