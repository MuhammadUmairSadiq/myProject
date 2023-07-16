#pragma once
#include"Shape.h"
class Rectangle:public Shape {
private:
	int width;
	bool isShaded;
public:
	Rectangle();                      // Defualt Constructor
	Rectangle(int, char,int, bool);       // Parametrized Constructor
	Rectangle(const Rectangle&);         // Copy Constructor
	void read();          // Read Function
	void display();      // Display Function
	void render();      // Render Function
	bool getisShaded();        // Getter
	int getWidth();           // Getter
	void setWidth(int);      // Setter
	void setisShaded(bool); // Setter
	Rectangle operator+(const Rectangle&);     // Operator +
	Rectangle& operator=(const Rectangle&);   // Operator =
	bool operator==(const Rectangle&);       // Comparsion Operator ==
	bool operator!=(const Rectangle&);      // Comparsion Operator !=
	Rectangle& operator++();                // pre-increament
	Rectangle operator++(int);            // post-increament
	Rectangle& operator--();              // pre-decreament
	Rectangle operator--(int);          // post-decreament
	friend ostream& operator<<(ostream&, const Rectangle&);      // Extraction Operator
	friend istream& operator>>(istream&, Rectangle&);           // Insertion Operator
};

