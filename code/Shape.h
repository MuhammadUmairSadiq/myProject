#pragma once
#include<iostream>
using namespace std;

class Shape {
protected:
	int length;
	char character;
public:
	Shape();                // Defualt Constructor
	Shape(int,char);       // Parametrized Constructor
	Shape(const Shape&);  // Copy Constructor
	virtual void read() = 0;          // Pure Virtual Read Function
	virtual void display() = 0;      // Pure Virtual Display Function
	virtual void render() = 0;      // Pure Virtual Render Function
	Shape& operator=(const Shape&);       // Operator =
	bool operator==(const Shape&);       // Comparsion Operator ==
	bool operator!=(const Shape&);      // Comparsion Operator !=
	friend ostream& operator<<(ostream&, const Shape&);      // Extraction Operator
	friend istream& operator>>(istream&, Shape&);           // Insertion Operator
};

