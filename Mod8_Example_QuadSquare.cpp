#include <iostream>
#include <string>

using namespace std;

class quadrilateral {
protected:
	double sideLength1;
	double sideLength2;
	double sideLength3;
	double sideLength4;
	double perimeter;

public:
	//constructor for quadrilateral
	quadrilateral(double side1, double side2, double side3, double side4) {
		sideLength1 = side1;
		sideLength2 = side2;
		sideLength3 = side3;
		sideLength4 = side4;
		setPerimeter();
	}

	int setPerimeter() {
		perimeter = sideLength1 + sideLength2 + sideLength3 + sideLength4;
		return perimeter;
	}

};

class square : public quadrilateral { //square inherits all protected and public stuff from quadrilateral
public:
	square(double sideLength) : quadrilateral(sideLength, sideLength, sideLength, sideLength) {
		//nothing more needed here.  sideLength of square gets passed as all 4 sides to quadrilateral
	}

	//perimeter also gets inherited publically.
};


int main()
{
	quadrilateral myQuad(1, 2, 3, 4);// instantiates a quadrilateral with sidelengths 1,2,3,4 respectively
	square mySquare(5);  //instantiate a square with sidelength 5

	cout << "Quadrilateral's perimeter: " << myQuad.setPerimeter() << endl;
	cout << "Square Perimeter: " << mySquare.setPerimeter() << endl; // Calling the setPerimeter function inherited from quadrilateral.

}