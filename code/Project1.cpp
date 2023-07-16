#include"Shape.h"
#include"Line.h"
#include"Rectangle.h"
#include"Triangle.h"
#include"SFML/Graphics.hpp"

int main() {
	while (1) {
		cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "                                                SHAPE DRAWING SYSTEM                                                   " << endl;
		cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
		char choice;
		cout << "Press 1 For Horizental Line." << endl;
		cout << "Press 2 For Vertical Line." << endl;
		cout << "Press 3 For Shaded Rectangle." << endl;
		cout << "Press 4 For Unshaded Rectangle." << endl;
		cout << "Press 5 For Triangle of Pramid Pattern." << endl;
		cout << "Press 6 For Down Triangle." << endl;
		cout << "Press 7 For Exit." << endl;
		cout << "Enter your Choice: ";
		cin >> choice;
		
		if (choice == '1') {   // print horizental line
			int length;
			cout << "Enter the length of the Line: ";
			cin >> length;
			char ch;
			cout << "Enter the Character you want to print: ";
			cin >> ch;
			Line L(length,ch,false);
			cout << endl;
			 //SFML Display
			float v1, v2;
			cout << "Enter the First Vertex: ";
			cin >> v1;
			cout << "Enter the Second Vertex: ";
			cin >> v2;
			sf::RenderWindow window(sf::VideoMode(400, 400), "SFML works!");
			sf::RectangleShape line(sf::Vector2f(length*10, 5));   // 200 is length, 5 is thickness of line
			line.setFillColor(sf::Color(100, 250, 50)); // colour
			line.setPosition(v1, v2); // position
			sf::LinesStrip; 

			while (window.isOpen()) {
				sf::Event event;
				while (window.pollEvent(event)) {
					if (event.type == sf::Event::Closed) { window.close(); }
				}
				window.clear();
				window.draw(line);
				window.display();
			}
			L.display();
			cout << "Horizental Line is Also Displayed on SFML Console." << endl;
			cout << endl;
			L.render();
			cout << endl;
		}
		else if (choice == '2') {   // print vertical line
			int length;
			cout << "Enter the length of the Line: ";
			cin >> length;
			char ch;
			cout << "Enter the Character you want to print: ";
			cin >> ch;
			Line L(length, ch, true);
			cout << endl;
			// SFML Display
			float v1, v2;
			cout << "Enter the First Vertex: ";
			cin >> v1;
			cout << "Enter the Second Vertex: ";
			cin >> v2;
			sf::RenderWindow window(sf::VideoMode(400, 400), "SFML works!");
			sf::RectangleShape line(sf::Vector2f(3, 300)); // 3 is thickness and 300 is length
			line.setFillColor(sf::Color(100, 250, 50)); // colour
			line.setPosition(v1,v2); // position
			sf::LinesStrip;

			while (window.isOpen()) {
				sf::Event event;
				while (window.pollEvent(event)) {
					if (event.type == sf::Event::Closed) { window.close(); }
				}
				window.clear();
				window.draw(line);
				window.display();
			}
			L.display();
			cout << "Vertical Line is Also Displayed on SFML Console." << endl;
			cout << endl;
			L.render();
			cout << endl;
		}
		else if (choice == '3') {   // print shahded rectangle
			int length;
			cout << "Enter the length of the Rectangle: ";
			cin >> length;
			int width;
			cout << "Enter the Width of the Rectangle: ";
			cin >> width;
			char ch;
			cout << "Enter the Character you want to print: ";
			cin >> ch;
			Rectangle R(length, ch,width, true);
			cout << endl;
			 // SFML Display
			float v1, v2;
			cout << "Enter the First Vertex: ";
			cin >> v1;
			cout << "Enter the Second Vertex: ";
			cin >> v2;
			sf::RenderWindow window(sf::VideoMode(400, 400), "SFML works!");
			sf::RectangleShape rectangle(sf::Vector2f(300, 150)); // 300 is width and 150 is length
			rectangle.setFillColor(sf::Color(100, 250, 50)); // colour
			rectangle.setPosition(v1,v2); // position
			sf::LinesStrip;

			while (window.isOpen()) {
				sf::Event event;
				while (window.pollEvent(event)) {
					if (event.type == sf::Event::Closed) { window.close(); }
				}
				window.clear();
				window.draw(rectangle);
				window.display();
			}
			R.display();
			cout << "Shahed Rectangle is Also Displayed on SFML Console." << endl;
			cout << endl;
			R.render();
			cout << endl;
		}
		else if (choice == '4') {   // print unshahded rectangle
			int length;
			cout << "Enter the length of the Rectangle: ";
			cin >> length;
			int width;
			cout << "Enter the Width of the Rectangle: ";
			cin >> width;
			char ch;
			cout << "Enter the Character you want to print: ";
			cin >> ch;
			Rectangle R(length, ch, width, false);
			cout << endl;
			// SFML Display
			float v1, v2;
			cout << "Enter the First Vertex: ";
			cin >> v1;
			cout << "Enter the Second Vertex: ";
			cin >> v2;
			sf::RenderWindow window(sf::VideoMode(400, 400), "SFML works!");
			cout << endl;
			sf::RectangleShape rectangle(sf::Vector2f(300, 150)); // 300 is width and 150 is length
			rectangle.setFillColor(sf::Color(0, 0, 0)); // colour
			rectangle.setOutlineThickness(3);  // outline thickness
			rectangle.setOutlineColor(sf::Color(100, 250, 50)); // outlline colour
			rectangle.setPosition(v1,v2); // position
			sf::LinesStrip;

			while (window.isOpen()) {
				sf::Event event;
				while (window.pollEvent(event)) {
					if (event.type == sf::Event::Closed) { window.close(); }
				}
				window.clear();
				window.draw(rectangle);
				window.display();
			}
			R.display();
			cout << "Un-Shahed Rectangle is Also Displayed on SFML Console." << endl;
			cout << endl;
			R.render();
			cout << endl;
		}
		else if (choice == '5') {   // print pramid triangle
			int length;
			cout << "Enter the length of the Triangle: ";
			cin >> length;
			int height;
			cout << "Enter the height of the Triangle: ";
			cin >> height;
			char ch;
			cout << "Enter the Character you want to print: ";
			cin >> ch;
			Triangle T(length, ch, height, true);
			cout << endl;
			 //SFML Display
			float v1, v2;
			cout << "Enter the First Vertex: ";
			cin >> v1;
			cout << "Enter the Second Vertex: ";
			cin >> v2;
			sf::RenderWindow window(sf::VideoMode(400, 400), "SFML works!");
			cout << endl;
			sf::CircleShape triangle(length*9, 3);
			triangle.setFillColor(sf::Color(100, 250, 50)); // colour
			triangle.setPosition(v1 ,v2); // position
			sf::LinesStrip;

			while (window.isOpen()) {
				sf::Event event;
				while (window.pollEvent(event)) {
					if (event.type == sf::Event::Closed) { window.close(); }
				}
				window.clear();
				window.draw(triangle);
				window.display();
			}
			T.display();
			cout << "Pramid Triangle is Also Displayed on SFML Console." << endl;
			cout << endl;
			T.render();
			cout << endl;
		} 
		else if (choice == '6') {   // print down triangle
			int length;
			cout << "Enter the length of the Triangle: ";
			cin >> length;
			int height;
			cout << "Enter the height of the Triangle: ";
			cin >> height;
			char ch;
			cout << "Enter the Character you want to print: ";
			cin >> ch;
			Triangle T(length, ch, height, false);
			cout << endl;
			// SFML Display
			float v1;
			cout << "Enter the First Vertex: ";
			cin >> v1;
			sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");
			sf::VertexArray triangle(sf::Triangles, 3);
			triangle[0].position = sf::Vector2f(v1, v1*3);
			triangle[1].position = sf::Vector2f(v1,v1);
			triangle[2].position = sf::Vector2f(v1*3, v1);
			sf::LinesStrip;

			while (window.isOpen()) {
				sf::Event event;
				while (window.pollEvent(event)) {
					if (event.type == sf::Event::Closed) { window.close(); }
				}
				window.clear();
				window.draw(triangle);
				window.display();
			}
			T.display();
			cout << endl;
			T.render();
			cout << endl;
		}
		else if (choice == '7') {    // program exit
			cout << endl << "You Exit The Program.Successfully!" << endl;
			break;
		}
		else if (choice < '48' || choice > '57') { // wroung condition  
		cout << endl << "Invalid Choice.Select your Choice Carefully Again!" << endl <<endl;
		}
	}
	return 0;
}