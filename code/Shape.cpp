#include "Shape.h"

Shape::Shape() { // Defualt Constructor
	length = 0;
	character = '*';
}
Shape::Shape(int len, char chr) { // Parametrized Constructor
	length = len;
	character = chr;
}
Shape::Shape(const Shape& other) { // Copy Constructor
	length = other.length;
	character = other.character;
}
Shape& Shape::operator=(const Shape& other) { // Operator =
	if (this != &other) {
		length = other.length;
		character = other.character;
	}
	return *this;
}
bool Shape::operator==(const Shape& other) { // Comparsion Operator ==
	if (this == &other) {
		return true;
	}
	return false;
}
bool Shape::operator!=(const Shape& other) { // Comparsion Operator !=
	if (this != &other) {
		return true;
	}
	return false;
}
ostream& operator<<(ostream& out, const Shape& other) { // Extraction Operator
	cout << "Length is: ";
	out << other.length << endl;
	cout << "Character is: ";
	out << other.character << endl;
	return out;

}
istream& operator>>(istream& in, Shape& other) {    // Insertion Operator
	cout << "Enter the Data of Shape" << endl;
	cout << "Enter the Length here: ";
	in >> other.length;
	cout << "Enter the Character here: ";
	in >> other.character;
	return in;
}