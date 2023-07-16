#include "Rectangle.h"

Rectangle::Rectangle() :Shape() {  // Defualt Constructor
	width = 0;
	isShaded = false;
}
Rectangle::Rectangle(int len, char chr,int wid, bool sh) : Shape(len, chr) { // Parametrized Constructor
	width = wid;
	isShaded = sh;
}
Rectangle::Rectangle(const Rectangle& other) : Shape(other) { // Copy Constructor
	width = other.width;
	isShaded = other.isShaded;
}
bool Rectangle::getisShaded() {        // Getter
	return isShaded;
}
int Rectangle::getWidth() {        // Getter
	return width;
}
void Rectangle::setWidth(int wid) {         // Setter
	width = wid;
}
void Rectangle::setisShaded(bool sha) { // Setter
	isShaded = sha;
}
void Rectangle::read() { // Read Function
	cout << "Enter the Length of Line: ";
	cin >> length;
	cout << "Enter the Width of Line: ";
	cin >> width;
	cout << "Enter the Character you want to print: ";
	cin >> character;
	cout << "Enter 1 for Shahed Rectangle." << endl;
	cout << "Enter 2 for Unshahed Rectangle." << endl;
	int choice;
	cout << "Enter the choice here: ";
	cin >> choice;
	if (choice == 1) { isShaded = true; }
	else { isShaded = false; }
}
void Rectangle::display() {// Display Function
	cout << "Length is: " << length << endl;
	cout << "Character is: " << character << endl;
	cout << "Wiidth is: " << width << endl;
	if (isShaded == true) { cout << "Rectangle is Shaded." << endl; }
	else { cout << "Rectangle is Unshaded." << endl; }
}
void Rectangle::render() {// Render Function
	if (isShaded == true) {
		for (int i = 0; i < length; i++) {
			for (int j = 0; j < width; j++) {
				cout << character;
			}
			cout << endl;
		}
	}
	else {
		for (int i = 0; i < length; i++) {
			for (int j = 0; j < width; j++) {
				if (i == 0 || i == length - 1) { cout << character; }
				else if (j == 0 || j == width - 1) { cout << character; }
				else { cout << " "; }
			}
			cout << endl;
		}
	}
}
Rectangle Rectangle::operator+(const Rectangle& other) { // Operator +
	Rectangle temp;
	temp.length = other.length+length;
	temp.width = other.width * 2;
	return temp;
}
Rectangle& Rectangle::operator=(const Rectangle& other) { // Operator =
	if (this != &other) {
		length = other.length;
		character = other.character;
		width = other.width;
		isShaded = other.isShaded;
	}
	return *this;
}
bool Rectangle::operator==(const Rectangle& other) { // Comparsion Operator ==
	if (this == &other) {
		return true;
	}
	return false;
}
bool Rectangle::operator!=(const Rectangle& other) { // Comparsion Operator !=
	if (this != &other) {
		return true;
	}
	return false;
}
Rectangle& Rectangle::operator++() {  // pre-increament
	length = length + 1;
	width = width + 1;
	return *this;
}
Rectangle Rectangle::operator++(int) { // post-increament
	Rectangle temp;
	temp.length = length + 1;
	temp.width = width + 1;
	return *this;
}
Rectangle& Rectangle::operator--() { // pre-decreament
	length = length - 1;
	width = width - 1;
	return *this;
}
Rectangle Rectangle::operator--(int) { // post-decreament
	Rectangle temp;
	temp.length = length - 1;
	temp.width = width - 1;
	return *this;
}
ostream& operator<<(ostream& out, const Rectangle& other) { // Extraction Operator
	cout << "Length is: ";
	out << other.length << endl;
	cout << "Character is: ";
	out << other.character << endl;
	cout << "Width is: ";
	out << other.width << endl;
	if (other.isShaded == true) { cout << "Rectangle is Shaded." << endl; }
	else { cout << "Rectangle is Unshaded." << endl; }
	return out;
}
istream& operator>>(istream& in, Rectangle& other) { // Insertion Operator
	cout << "Enter the Data of Rectangle" << endl;
	cout << "Enter the Lenth of the Rectangle: ";
	in >> other.length;
	cout << "Enter the Character which you  want to print: ";
	in >> other.character;
	cout << "Enter the Width of the Rectangle: ";
	in >> other.width;
	cout << "Enter 1 for Shahed Rectangle." << endl;
	cout << "Enter 2 for Unshahed Rectangle." << endl;
	int choice;
	cout << "Enter the choice here: ";
	cin >> choice;
	if (choice == 1) { other.isShaded = true; }
	else if (choice == 2) { other.isShaded = false; }
	else { other.isShaded = false; }
	return in;
}