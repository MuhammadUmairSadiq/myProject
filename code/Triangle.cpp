#include "Triangle.h"

Triangle::Triangle() :Shape() {  // Defualt Constructor
	height = 0;
	Direction = false;
}
Triangle::Triangle(int len, char chr,int hei, bool dir) : Shape(len, chr) { // Parametrized Constructor
	height = hei;
	Direction = dir;
}
Triangle::Triangle(const Triangle& other) : Shape(other) { // Copy Constructor
	height = other.height;
	Direction = other.Direction;
}
int  Triangle::getHeight() {            //Getter
	return height;
}
bool Triangle::getDirection() {      //	Getter
	return Direction;
}
void Triangle::setHeight(int hei) {       // Setter
	height = hei;
}
void Triangle::setDirection(int dir) {   //  Setter
	Direction = dir;
}
void Triangle::read() { // Read Function
	cout << "Enter the Length of Line: ";
	cin >> length;
	cout << "Enter the Height of Line: ";
	cin >> height;
	cout << "Enter the Character you want to print: ";
	cin >> character;
	cout << "Enter 1 for Pyramid Pattern." << endl;
	cout << "Enter 2 for Down Direction Triangle." << endl;
	int choice;
	cout << "Enter the choice here: ";
	cin >> choice;
	if (choice == 1) { Direction = true; }
	else { Direction = false; }
}
void Triangle::display() {// Display Function
	cout << "Length is: " << length << endl;
	cout << "Character is: " << character << endl;
	cout << "Height is: " << height << endl;
	if (Direction == true) { cout << "Triangle is in Pyramid Pattern." << endl; }
	else { cout << "Triangle is in Down Direction." << endl; }
}
void Triangle::render() {// Render Function
	if (Direction == true) {
		int k = 2 * length - 2;
		for (int i = 0; i < length; i++) {
			for (int j = 0; j < k; j++) { 
				cout << " ";
			}
			k--;
			for (int j = 0; j <= i; j++) { 
				cout << character<<" ";
			}
			cout << endl;
		}
	}
	else {
		for (int i = height; i > 0; i--) {
			for (int j = 0; j < i; j++) {
				cout << character;
			}
			cout << endl;
		}
	}
}
Triangle Triangle::operator+(const Triangle& other) { // Operator +
	Triangle temp;
	temp.length = other.length + length;
	return temp;
}
Triangle& Triangle::operator=(const Triangle& other) { // Operator =
	if (this != &other) {
		length = other.length;
		character = other.character;
		height = other.height;
		Direction = other.Direction;
	}
	return *this;
}
bool Triangle::operator==(const Triangle& other) { // Comparsion Operator ==
	if (this == &other) {
		return true;
	}
	return false;
}
bool Triangle::operator!=(const Triangle& other) { // Comparsion Operator !=
	if (this != &other) {
		return true;
	}
	return false;
}
Triangle& Triangle::operator++() {  // pre-increament
	length = length + 1;
	height = height + 1;
	return *this;
}
Triangle Triangle::operator++(int) { // post-increament
	Triangle temp;
	temp.length = length + 1;
	temp.height = height + 1;
	return *this;
}
Triangle& Triangle::operator--() { // pre-decreament
	length = length - 1;
	height = height - 1;
	return *this;
}
Triangle Triangle::operator--(int) { // post-decreament
	Triangle temp;
	temp.length = length - 1;
	temp.height = height - 1;
	return *this;
}
ostream& operator<<(ostream& out, const Triangle& other) { // Extraction Operator
	cout << "Length is: ";
	out << other.length << endl;
	cout << "Character is: ";
	out << other.character << endl;
	cout << "Height is: ";
	out << other.height << endl;
	if (other.Direction == true) { cout << "Triangle is in Pyramid Pattern." << endl; }
	else { cout << "Triangle is in Down Direction." << endl; }
	return out;
}
istream& operator>>(istream& in, Triangle& other) { // Insertion Operator
	cout << "Enter the Data of Triangle" << endl;
	cout << "Enter the Lenth of the Triangle: ";
	in >> other.length;
	cout << "Enter the Character which you  want to print: ";
	in >> other.character;
	cout << "Enter the Height of the Triangle: ";
	in >> other.height;
	cout << "Enter 1 for Pyramid Pattern." << endl;
	cout << "Enter 2 for Down Direction Triangle." << endl;
	int choice;
	cout << "Enter the choice here: ";
	cin >> choice;
	if (choice == 1) { other.Direction = true; }
	else if (choice == 2) { other.Direction = false; }
	else { other.Direction = false; }
	return in;
}
