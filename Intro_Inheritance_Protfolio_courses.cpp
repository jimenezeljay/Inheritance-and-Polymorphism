#include <iostream>

using namespace std;

class MenuItem //base class/parent class
{
public:
    string name;
    double calories;

    void print()
    {
        cout<< name << " (" << calories << " cal)" <<endl;
    }
};

//Drink class INHERITS member variables and member functions of MenuItem
class Drink : public MenuItem//drink class is the derived class/child class
{//you can add extra stuff more more specification down here!
public:

    double ounces;

    double cal_per_ounce()
    {
        return calories / ounces;
    }

};

int main() 
{
    MenuItem french_fries;

    french_fries.name = "French Fries";
    french_fries.calories = 400;

    french_fries.print();


    Drink hot_chocolate;

    hot_chocolate.name = "Hot Chocolate";
    hot_chocolate.calories = 300;
    hot_chocolate.ounces = 8;

    hot_chocolate.print();

    cout<< "cal/ounce: " << hot_chocolate.cal_per_ounce() <<endl;

//polymorphism
    MenuItem *ptr;

    ptr = &hot_chocolate;//assigned the memory object

    ptr -> print();//calls the print function for hot choclate


    return 0;
}