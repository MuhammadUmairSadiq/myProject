#pragma once
#include"Shape.h"

class Line:public Shape {
private:
	bool checkOrientation;
public:
	Line();                      // Defualt Constructor
	Line(int, char,bool);       // Parametrized Constructor
	Line(const Line&);         // Copy Constructor
	bool getcheckOrientation();        // Getter
	void setcheckOrientation(bool);   // Setter
	void read();          // Read Function
	void display();      // Display Function
	void render();      // Render Function
	Line operator+(const Line&);          // Operator +
	Line& operator=(const Line&);        // Operator =
	bool operator==(const Line&);       // Comparsion Operator ==
	bool operator!=(const Line&);      // Comparsion Operator !=
	Line& operator++();               // pre-increament
	Line operator++(int);            // post-increament
	Line& operator--();             // pre-decreament
	Line operator--(int);          // post-decreament
	friend ostream& operator<<(ostream&, const Line&);      // Extraction Operator
	friend istream& operator>>(istream&, Line&);           // Insertion Operator
};

