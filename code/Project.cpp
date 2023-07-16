#include"Shape.h"
#include"Line.h"
#include"Rectangle.h"
#include"Triangle.h"

int main() {
	const int NUMBER = 6;
	Shape* shapes[NUMBER];
	shapes[0] = new Line(10, '*', true);
	shapes[1] = new Line(10, '+', false);
	shapes[2] = new Rectangle(10, '&', 5, false);
	shapes[3] = new Triangle(9, '%', 6, false);
	shapes[4] = new Rectangle(10, '@', 5, true);
	shapes[5] = new Triangle(9, '$', 6, true);
	cout << "** Line **\n" << endl;
	Line* pl = (Line*)shapes[0];
	Line l1 = *pl;
	cout << "Line one:" << l1;
	pl = (Line*)shapes[1];
	Line l2 = *pl;
	cout << "Line two:" << l2;
	Line L = l1 + l2;
	cout << " Line one + Line two = : " << L;
	L = l1++;
	cout << " L = l1++ = : " << L;
	L = --l1;
	cout << " L = --l1 = : " << L;
	cout << "l1 == l2: " << (l1 == l2) << endl;
	cout << "l1 != l2: " << (l1 != l2) << endl;
	cout << "** Triangle **\n" << endl;
	Triangle* pt = (Triangle*)shapes[3];
	Triangle t1 = *pt;
	cout << "Triangle one:" << t1;
	pt = (Triangle*)shapes[5];
	Triangle t2 = *pt;
	cout << "Triangle two:" << t1;
	Triangle T= t1 + t2;
	cout << "Triangle one + two:" << T;
	T = t1++;
	cout << "t1++ = " << T;
	T = --t1;
	cout << "--t1 = " << T;
	cout << "t1 == t2: " << (t1 == t2) << endl;
	cout << "t1 != t2: " << (t1 != t2) << endl;
	cout << "** Triangle **\n";
	Rectangle* pr = (Rectangle*)shapes[2];
	Rectangle r1 = *pr;
	cout << "Rectangle one:" << r1;
	pr = (Rectangle*)shapes[4];
	Rectangle r2 = *pr;
	cout << "Rectangle two:" << r2;
	Rectangle R = r1 + r2;
	cout << " Rectangle one + two = " << R;
	R = r1++;
	cout << "R = r1++: " << R;
	R = --r1;
	cout << "R = --r1: " << R;
	cout << "r1 == r2: " << (r1 == r2) << endl;
	cout << "r1 != r2: " << (r1 != r2) << endl;
	// cin on Line, Rectangle and Triangle
	//cin >> L >> R >> T;
	// cout on Line, Rectangle and Triangle
	//cout << L << R << T;
	// polymorphism
	cout << "Invoking through polymorphism: \n";
	for (int i = 0; i < NUMBER; i++)
	{
		shapes[i]->display();
		shapes[i]->render();
	}
	return 0;
}