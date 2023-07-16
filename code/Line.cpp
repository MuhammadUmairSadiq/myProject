#include "Line.h"

Line::Line() :Shape() {  // Defualt Constructor
	checkOrientation = false;
}
Line::Line(int len, char chr, bool orient): Shape(len,chr) { // Parametrized Constructor
	checkOrientation = orient;
}
Line::Line(const Line& other) : Shape(other) { // Copy Constructor
	checkOrientation = other.checkOrientation;
}
bool Line::getcheckOrientation() {      // Getter
	return checkOrientation;
}
void Line::setcheckOrientation(bool ori) {   // Setter
	checkOrientation = ori;
}
void Line::read() { // Read Function
	cout << "Enter the Length of Line: ";
	cin >> length;
	cout << "Enter the Character you want to print: ";
	cin >> character;
	cout << "Enter 1 for Vertical Line." << endl;
	cout << "Enter 2 for Horizental Line." << endl;
	int choice;
	cout << "Enter the choice here: ";
	cin >> choice;
	if (choice == 1) { checkOrientation = true; }
	else { checkOrientation = false; } 
}
void Line::display() {// Display Function
	cout << "Length is: " << length << endl;
	cout << "Character is: " << character << endl;
	if (checkOrientation == true) { cout << "Line is Vertical." << endl; }
	else { cout << "Line is Horizental." << endl; }
}
void Line::render() {// Render Function
	if (checkOrientation == true) {
		for (int i = 0; i < length; i++) {
			cout << character << endl;
		}
	}
	else {
		for (int i = 0; i < length; i++) {
			cout << character ;
		}
		cout << endl;
	}
}
Line& Line::operator=(const Line& other) { // Operator =
	if (this != &other) {
		length = other.length;
		character = other.character;
	}
	return *this;
}
Line Line::operator+(const Line& other) { // Operator +
	Line temp;
	temp.length = other.length + length;
	return temp;
}
bool Line::operator==(const Line& other) { // Comparsion Operator ==
	if (this == &other) {
		return true;
	}
	return false;
}
bool Line::operator!=(const Line& other) { // Comparsion Operator !=
	if (this != &other) {
		return true;
	}
	return false;
}
Line& Line::operator++() {  // pre-increament
	length = length + 1;
	return *this;
}
Line Line::operator++(int) { // post-increament
	Line temp;
	temp.length = length + 1;
	return *this;
}
Line& Line::operator--() { // pre-decreament
	length = length - 1;
	return *this;
}
Line Line::operator--(int) { // post-decreament
	Line temp;
	temp.length = length - 1;
	return *this;
}
ostream& operator<<(ostream& out, const Line& other) { // Extraction Operator
	cout << "Length is: ";
	out << other.length << endl;
	cout << "Character is: ";
	out << other.character << endl;
	if (other.checkOrientation == true) { cout << "Line is Vertical Line." << endl; }
	else { cout << "Line is Horizental Line." << endl; }
	return out;
}
istream& operator>>(istream& in, Line& other) { // Insertion Operator
	cout << "Enter the Data of Line" << endl;
	cout << "Enter the Lenth of the Line: ";
	in >> other.length;
	cout << "Enter the Character which you  want to print: ";
	in >> other.character;
	cout << "Enter 1 for Vertical Line." << endl;
	cout << "Enter 2 for Horizental Line." << endl;
	int choice;
	cout << "Enter the choice here: ";
	cin >> choice;
	if (choice == 1) { other.checkOrientation = true; }
	else if (choice == 2) { other.checkOrientation = false; }
	else { other.checkOrientation = false; }   // by defualt if user enter any other number
	return in;
} 