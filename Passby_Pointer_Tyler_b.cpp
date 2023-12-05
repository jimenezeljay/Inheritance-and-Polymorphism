#include <iostream>
#include <string>

using namespace std;

void passByValue(int numnum){
	numnum = 60;  //numnum is a copy of the passed variable, changing its value only effects the copy

	cout << "value of copy of numnum after change: " << numnum << endl;
}

void passByReference(int& numnumRef) {
	numnumRef = 100; //reference to original numnum was passed, so numnum here refers to the original numnum. 
	//This change impacts the original numnum value

	cout << "value of numnumRef, the variable refering to same thing as numnum, after change: " << numnumRef << endl;
}

void passByPointer(int* numnumPtr)
{
	cout << "value of numnumPtr - where the passed variable numnum lives in memory:  " << numnumPtr << endl;
	cout << "value referenced (pointed to) by numnumPtr:  " << *numnumPtr << endl;
	*numnumPtr = 200; //dereferences what numnumPtr points to, getting the value of numnum at the original location in memory; not a copy.
	cout << "value at the location numnumPtr points to after change:  " << *numnumPtr << endl;

}

int main()
{
	int numnum = 30;

	passByValue(numnum);  //passes numnum, which gets copied into the function.
	cout << "Value of original numnum after copy was changed:  " << numnum << endl<<endl;

	passByReference(numnum);
	cout << "value of numnum after passByReference: " << numnum << endl << endl;

	passByPointer(&numnum);
	cout << "value of numnum after passByPointer:  " << numnum<< endl << endl<< endl << endl;

	return 0;
}