#pragma once
#include"Shape.h"
class Triangle:public Shape {
private:
	int height;
	bool Direction;
public:
	Triangle();                       // Defualt Constructor
	Triangle(int, char,int, bool);   // Parametrized Constructor
	Triangle(const Triangle&);      // Copy Constructor
	int  getHeight();             //Getter
	bool getDirection();         //	Getter
	void setHeight(int);        // Setter
	void setDirection(int);    //  Setter
	void read();          // Read Function
	void display();      // Display Function
	void render();      // Render Function
	Triangle operator+(const Triangle&);      // Operator +
	Triangle& operator=(const Triangle&);    // Operator =
	bool operator==(const Triangle&);       // Comparsion Operator ==
	bool operator!=(const Triangle&);      // Comparsion Operator !=
	Triangle& operator++();                // pre-increament
	Triangle operator++(int);            // post-increament
	Triangle& operator--();              // pre-decreament
	Triangle operator--(int);          // post-decreament
	friend ostream& operator<<(ostream&, const Triangle&);      // Extraction Operator
	friend istream& operator>>(istream&, Triangle&);           // Insertion Operator
};

