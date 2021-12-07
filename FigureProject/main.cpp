#include <iostream>
#include <conio.h>
#include <iomanip>

#include "circle.h"
#include "rectangle.h"
#include "square.h"
using std::endl;
using std::cout;
using std::cin;
using std::fixed;
using std::setw;

int main()
{
	try
	{
		bool isOpen = true;
		while (isOpen)
		{
			if (!_kbhit())
			{
				system("cls");
				cout << "Menu:\n 1) Test rectangle class\n 2) Test square class\n 3) Test circle class\n 4) Exit";

				char symbol = static_cast<char>(_getch());
				switch (symbol)
				{
				case '1':
					{
						bool isFirstOpen = true;
						while (isFirstOpen)
						{
							Rectangle rectangle(0, 40, 30, 40, 30, 0, 0, 0);

							if (!_kbhit())
							{
								system("cls");
								cout <<
									"Rectangle test menu:\n 1) Test move\n 2) Test resize\n 3) Test rotate\n 4) Test setHeight\n 5) Test setWidth\n 6) Exit";
								symbol = static_cast<char>(_getch());
								switch (symbol)
								{
								case '1':
									{
										system("cls");
										point_t leftTop = rectangle.getLeftTop();
										point_t rightTop = rectangle.getRightTop();
										point_t rightBottom = rectangle.getRightBottom();
										point_t leftBottom = rectangle.getLeftBottom();
										double xMove, yMove;
										cout << "Coordinates of Rectangle before move: ("
											<< leftTop.first << ":" << leftTop.second << "),("
											<< rightTop.first << ":" << rightTop.second << "), ("
											<< rightBottom.first << ":" << rightBottom.second << "), ("
											<< leftBottom.first << ":" << leftBottom.second << ")" << endl;
										cout << "Enter X move: ";
										cin >> xMove;
										cout << "Enter Y move: ";
										cin >> yMove;
										rectangle.move(xMove, yMove);
										leftTop = rectangle.getLeftTop();
										rightTop = rectangle.getRightTop();
										rightBottom = rectangle.getRightBottom();
										leftBottom = rectangle.getLeftBottom();
										cout << endl << "Coordinates of Rectangle after move: ("
											<< leftTop.first << ":" << leftTop.second << "),("
											<< rightTop.first << ":" << rightTop.second << "), ("
											<< rightBottom.first << ":" << rightBottom.second << "), ("
											<< leftBottom.first << ":" << leftBottom.second << ")" << endl;
										cout << endl << "8) Back";
										while (symbol != '8')
										{
											if (!_kbhit())
											{
												symbol = static_cast<char>(_getch());
											}
										}
									}
									break;
								case '2':
									{
										system("cls");
										point_t leftTop = rectangle.getLeftTop();
										point_t rightTop = rectangle.getRightTop();
										point_t rightBottom = rectangle.getRightBottom();
										point_t leftBottom = rectangle.getLeftBottom();
										double multiplier;
										cout << "Coordinates of Rectangle before resize: ("
											<< leftTop.first << ":" << leftTop.second << "),("
											<< rightTop.first << ":" << rightTop.second << "), ("
											<< rightBottom.first << ":" << rightBottom.second << "), ("
											<< leftBottom.first << ":" << leftBottom.second << ")" << endl <<
											"Height: " << rectangle.getHeight() << endl << "Width: " << rectangle.
											getWidth() << endl;
										cout << "Enter MULTIPLIER to resize: ";
										cin >> multiplier;
										rectangle.resize(multiplier);
										leftTop = rectangle.getLeftTop();
										rightTop = rectangle.getRightTop();
										rightBottom = rectangle.getRightBottom();
										leftBottom = rectangle.getLeftBottom();
										cout << fixed << endl << "Coordinates of Rectangle after resize: ("
											<< leftTop.first << ":" << leftTop.second << "),("
											<< rightTop.first << ":" << rightTop.second << "), ("
											<< rightBottom.first << ":" << rightBottom.second << "), ("
											<< leftBottom.first << ":" << leftBottom.second << ")" << endl <<
											"Height: " << rectangle.getHeight() << endl << "Width: " << rectangle.
											getWidth() << endl;
										cout << endl << "8) Back";
										while (symbol != '8')
										{
											if (!_kbhit())
											{
												symbol = static_cast<char>(_getch());
											}
										}
									}
									break;
								case '3':
									{
										system("cls");
										point_t leftTop = rectangle.getLeftTop();
										point_t rightTop = rectangle.getRightTop();
										point_t rightBottom = rectangle.getRightBottom();
										point_t leftBottom = rectangle.getLeftBottom();
										double angle;
										cout << "Coordinates of Rectangle before rotate: ("
											<< leftTop.first << ":" << leftTop.second << "),("
											<< rightTop.first << ":" << rightTop.second << "), ("
											<< rightBottom.first << ":" << rightBottom.second << "), ("
											<< leftBottom.first << ":" << leftBottom.second << ")" << endl;
										cout << "Enter DEGREE ANGLE to rotate: ";
										cin >> angle;
										rectangle.rotate(angle);
										leftTop = rectangle.getLeftTop();
										rightTop = rectangle.getRightTop();
										rightBottom = rectangle.getRightBottom();
										leftBottom = rectangle.getLeftBottom();
										cout << fixed << endl << "Coordinates of Rectangle after rotate: ("
											<< leftTop.first << ":" << leftTop.second << "),("
											<< rightTop.first << ":" << rightTop.second << "), ("
											<< rightBottom.first << ":" << rightBottom.second << "), ("
											<< leftBottom.first << ":" << leftBottom.second << ")" << endl;
										cout << endl << "8) Back";
										while (symbol != '8')
										{
											if (!_kbhit())
											{
												symbol = static_cast<char>(_getch());
											}
										}
									}
									break;
								case '4':
									{
										system("cls");
										point_t leftTop = rectangle.getLeftTop();
										point_t rightTop = rectangle.getRightTop();
										point_t rightBottom = rectangle.getRightBottom();
										point_t leftBottom = rectangle.getLeftBottom();
										double height;
										cout << "Coordinates of Rectangle before setHeight: ("
											<< leftTop.first << ":" << leftTop.second << "),("
											<< rightTop.first << ":" << rightTop.second << "), ("
											<< rightBottom.first << ":" << rightBottom.second << "), ("
											<< leftBottom.first << ":" << leftBottom.second << ")" << endl <<
											"Height: " << rectangle.getHeight() << endl << "Width: " << rectangle.
											getWidth() << endl;
										cout << "Enter Height: ";
										cin >> height;
										rectangle.setHeight(height);
										leftTop = rectangle.getLeftTop();
										rightTop = rectangle.getRightTop();
										rightBottom = rectangle.getRightBottom();
										leftBottom = rectangle.getLeftBottom();
										cout << endl << "Coordinates of Rectangle after setHeight: ("
											<< leftTop.first << ":" << leftTop.second << "),("
											<< rightTop.first << ":" << rightTop.second << "), ("
											<< rightBottom.first << ":" << rightBottom.second << "), ("
											<< leftBottom.first << ":" << leftBottom.second << ")" << endl <<
											"Height: " << rectangle.getHeight() << endl << "Width: " << rectangle.
											getWidth() << endl;
										cout << endl << "8) Back";
										while (symbol != '8')
										{
											if (!_kbhit())
											{
												symbol = static_cast<char>(_getch());
											}
										}
									}
									break;
								case '5':
									{
										system("cls");
										point_t leftTop = rectangle.getLeftTop();
										point_t rightTop = rectangle.getRightTop();
										point_t rightBottom = rectangle.getRightBottom();
										point_t leftBottom = rectangle.getLeftBottom();
										double width;
										cout << "Coordinates of Rectangle before setWidth: ("
											<< leftTop.first << ":" << leftTop.second << "),("
											<< rightTop.first << ":" << rightTop.second << "), ("
											<< rightBottom.first << ":" << rightBottom.second << "), ("
											<< leftBottom.first << ":" << leftBottom.second << ")" << endl <<
											"Height: " << rectangle.getHeight() << endl << "Width: " << rectangle.
											getWidth() << endl;
										cout << "Enter Width: ";
										cin >> width;
										rectangle.setWidth(width);
										leftTop = rectangle.getLeftTop();
										rightTop = rectangle.getRightTop();
										rightBottom = rectangle.getRightBottom();
										leftBottom = rectangle.getLeftBottom();
										cout << endl << "Coordinates of Rectangle after setWidth: ("
											<< leftTop.first << ":" << leftTop.second << "),("
											<< rightTop.first << ":" << rightTop.second << "), ("
											<< rightBottom.first << ":" << rightBottom.second << "), ("
											<< leftBottom.first << ":" << leftBottom.second << ")" << endl <<
											"Height: " << rectangle.getHeight() << endl << "Width: " << rectangle.
											getWidth() << endl;
										cout << endl << "8) Back";
										while (symbol != '8')
										{
											if (!_kbhit())
											{
												symbol = static_cast<char>(_getch());
											}
										}
									}
									break;
								case '6':
									isFirstOpen = false;
									break;
								}
							}
						}
					}
					break;
				case '2':
					{
						bool isSecondOpen = true;
						while (isSecondOpen)
						{
							Square square(0, 30, 30, 30, 30, 0, 0, 0);

							if (!_kbhit())
							{
								system("cls");
								cout <<
									"Square test menu:\n 1) Test move\n 2) Test resize\n 3) Test rotate\n 4) Test setHeight\n 5) Test setWidth\n 6) Exit";
								symbol = static_cast<char>(_getch());
								switch (symbol)
								{
								case '1':
									{
										system("cls");
										point_t leftTop = square.getLeftTop();
										point_t rightTop = square.getRightTop();
										point_t rightBottom = square.getRightBottom();
										point_t leftBottom = square.getLeftBottom();
										double xMove, yMove;
										cout << "Coordinates of square before move: ("
											<< leftTop.first << ":" << leftTop.second << "),("
											<< rightTop.first << ":" << rightTop.second << "), ("
											<< rightBottom.first << ":" << rightBottom.second << "), ("
											<< leftBottom.first << ":" << leftBottom.second << ")" << endl;
										cout << "Enter X move: ";
										cin >> xMove;
										cout << "Enter Y move: ";
										cin >> yMove;
										square.move(xMove, yMove);
										leftTop = square.getLeftTop();
										rightTop = square.getRightTop();
										rightBottom = square.getRightBottom();
										leftBottom = square.getLeftBottom();
										cout << endl << "Coordinates of square after move: ("
											<< leftTop.first << ":" << leftTop.second << "),("
											<< rightTop.first << ":" << rightTop.second << "), ("
											<< rightBottom.first << ":" << rightBottom.second << "), ("
											<< leftBottom.first << ":" << leftBottom.second << ")" << endl;
										cout << endl << "8) Back";
										while (symbol != '8')
										{
											if (!_kbhit())
											{
												symbol = static_cast<char>(_getch());
											}
										}
									}
									break;
								case '2':
									{
										system("cls");
										point_t leftTop = square.getLeftTop();
										point_t rightTop = square.getRightTop();
										point_t rightBottom = square.getRightBottom();
										point_t leftBottom = square.getLeftBottom();
										double multiplier;
										cout << "Coordinates of square before resize: ("
											<< leftTop.first << ":" << leftTop.second << "),("
											<< rightTop.first << ":" << rightTop.second << "), ("
											<< rightBottom.first << ":" << rightBottom.second << "), ("
											<< leftBottom.first << ":" << leftBottom.second << ")" << endl <<
											"Height: " << square.getHeight() << endl << "Width: " << square.
											getWidth() << endl;
										cout << "Enter MULTIPLIER to resize: ";
										cin >> multiplier;
										square.resize(multiplier);
										leftTop = square.getLeftTop();
										rightTop = square.getRightTop();
										rightBottom = square.getRightBottom();
										leftBottom = square.getLeftBottom();
										cout << fixed << endl << "Coordinates of square after resize: ("
											<< leftTop.first << ":" << leftTop.second << "),("
											<< rightTop.first << ":" << rightTop.second << "), ("
											<< rightBottom.first << ":" << rightBottom.second << "), ("
											<< leftBottom.first << ":" << leftBottom.second << ")" << endl <<
											"Height: " << square.getHeight() << endl << "Width: " << square.
											getWidth() << endl;
										cout << endl << "8) Back";
										while (symbol != '8')
										{
											if (!_kbhit())
											{
												symbol = static_cast<char>(_getch());
											}
										}
									}
									break;
								case '3':
									{
										system("cls");
										point_t leftTop = square.getLeftTop();
										point_t rightTop = square.getRightTop();
										point_t rightBottom = square.getRightBottom();
										point_t leftBottom = square.getLeftBottom();
										double angle;
										cout << "Coordinates of square before rotate: ("
											<< leftTop.first << ":" << leftTop.second << "),("
											<< rightTop.first << ":" << rightTop.second << "), ("
											<< rightBottom.first << ":" << rightBottom.second << "), ("
											<< leftBottom.first << ":" << leftBottom.second << ")" << endl;
										cout << "Enter DEGREE ANGLE to rotate: ";
										cin >> angle;
										square.rotate(angle);
										leftTop = square.getLeftTop();
										rightTop = square.getRightTop();
										rightBottom = square.getRightBottom();
										leftBottom = square.getLeftBottom();
										cout << fixed << endl << "Coordinates of square after rotate: ("
											<< leftTop.first << ":" << leftTop.second << "),("
											<< rightTop.first << ":" << rightTop.second << "), ("
											<< rightBottom.first << ":" << rightBottom.second << "), ("
											<< leftBottom.first << ":" << leftBottom.second << ")" << endl;
										cout << endl << "8) Back";
										while (symbol != '8')
										{
											if (!_kbhit())
											{
												symbol = static_cast<char>(_getch());
											}
										}
									}
									break;
								case '4':
									{
										system("cls");
										point_t leftTop = square.getLeftTop();
										point_t rightTop = square.getRightTop();
										point_t rightBottom = square.getRightBottom();
										point_t leftBottom = square.getLeftBottom();
										double height;
										cout << "Coordinates of square before setHeight: ("
											<< leftTop.first << ":" << leftTop.second << "),("
											<< rightTop.first << ":" << rightTop.second << "), ("
											<< rightBottom.first << ":" << rightBottom.second << "), ("
											<< leftBottom.first << ":" << leftBottom.second << ")" << endl <<
											"Height: " << square.getHeight() << endl << "Width: " << square.
											getWidth() << endl;
										cout << "Enter Height: ";
										cin >> height;
										square.setHeight(height);
										leftTop = square.getLeftTop();
										rightTop = square.getRightTop();
										rightBottom = square.getRightBottom();
										leftBottom = square.getLeftBottom();
										cout << endl << "Coordinates of square after setHeight: ("
											<< leftTop.first << ":" << leftTop.second << "),("
											<< rightTop.first << ":" << rightTop.second << "), ("
											<< rightBottom.first << ":" << rightBottom.second << "), ("
											<< leftBottom.first << ":" << leftBottom.second << ")" << endl <<
											"Height: " << square.getHeight() << endl << "Width: " << square.
											getWidth() << endl;
										cout << endl << "8) Back";
										while (symbol != '8')
										{
											if (!_kbhit())
											{
												symbol = static_cast<char>(_getch());
											}
										}
									}
									break;
								case '5':
									{
										system("cls");
										point_t leftTop = square.getLeftTop();
										point_t rightTop = square.getRightTop();
										point_t rightBottom = square.getRightBottom();
										point_t leftBottom = square.getLeftBottom();
										double width;
										cout << "Coordinates of square before setWidth: ("
											<< leftTop.first << ":" << leftTop.second << "),("
											<< rightTop.first << ":" << rightTop.second << "), ("
											<< rightBottom.first << ":" << rightBottom.second << "), ("
											<< leftBottom.first << ":" << leftBottom.second << ")" << endl <<
											"Height: " << square.getHeight() << endl << "Width: " << square.
											getWidth() << endl;
										cout << "Enter Width: ";
										cin >> width;
										square.setWidth(width);
										leftTop = square.getLeftTop();
										rightTop = square.getRightTop();
										rightBottom = square.getRightBottom();
										leftBottom = square.getLeftBottom();
										cout << endl << "Coordinates of square after setWidth: ("
											<< leftTop.first << ":" << leftTop.second << "),("
											<< rightTop.first << ":" << rightTop.second << "), ("
											<< rightBottom.first << ":" << rightBottom.second << "), ("
											<< leftBottom.first << ":" << leftBottom.second << ")" << endl <<
											"Height: " << square.getHeight() << endl << "Width: " << square.
											getWidth() << endl;
										cout << endl << "8) Back";
										while (symbol != '8')
										{
											if (!_kbhit())
											{
												symbol = static_cast<char>(_getch());
											}
										}
									}
									break;
								case '6':
									isSecondOpen = false;
									break;
								}
							}
						}
					}
					break;
				case '3':
					{
						bool isThirdOpen = true;
						while (isThirdOpen)
						{
							Circle circle(10, 10, 20);

							if (!_kbhit())
							{
								system("cls");
								cout <<
									"Circle test menu:\n 1) Test move\n 2) Test resize\n 3) Test setRadius \n 4) Exit";
								symbol = static_cast<char>(_getch());
								switch (symbol)
								{
								case '1':
									{
										system("cls");
										point_t center_ = circle.getCenter();
										double xMove, yMove;
										cout << "Coordinates of circle before move: ("
											<< center_.first << ":" << center_.second << ")" << endl << "Radius: " <<
											circle.getRadius() << endl;
										cout << "Enter X move: ";
										cin >> xMove;
										cout << "Enter Y move: ";
										cin >> yMove;
										circle.move(xMove, yMove);
										center_ = circle.getCenter();
										cout << "Coordinates of circle after move: ("
											<< center_.first << ":" << center_.second << ")" << endl << "Radius: " <<
											circle.getRadius() << endl;
										cout << endl << "8) Back";
										while (symbol != '8')
										{
											if (!_kbhit())
											{
												symbol = static_cast<char>(_getch());
											}
										}
									}
									break;
								case '2':
									{
										system("cls");
										point_t center_ = circle.getCenter();
										double multiplier;
										cout << "Coordinates of circle before resize: ("
											<< center_.first << ":" << center_.second << ")" << endl << "Radius: " <<
											circle.getRadius() << endl;
										cout << "Enter MULTIPLIER: ";
										cin >> multiplier;
										circle.resize(multiplier);
										center_ = circle.getCenter();
										cout << "Coordinates of circle after move: ("
											<< center_.first << ":" << center_.second << ")" << endl << "Radius: " <<
											circle.getRadius() << endl;
										cout << endl << "8) Back";
										while (symbol != '8')
										{
											if (!_kbhit())
											{
												symbol = static_cast<char>(_getch());
											}
										}
									}
									break;
								case '3':
									{
										system("cls");
										point_t center_ = circle.getCenter();
										double radius;
										cout << "Radius of circle before setRadius:" <<
											circle.getRadius() << endl;
										cout << "Enter RADIUS in degree: ";
										cin >> radius;
										circle.setRadius(radius);
										center_ = circle.getCenter();
										cout << "Radius of circle after setRadius: " <<
											circle.getRadius() << endl;
										cout << endl << "8) Back";
										while (symbol != '8')
										{
											if (!_kbhit())
											{
												symbol = static_cast<char>(_getch());
											}
										}
									}
									break;
								case '4':
									isThirdOpen = false;
									break;
								}
							}
						}
					}
					break;
				case '4':
					isOpen = false;
					break;
				}
			}
		}
	}
	catch (const exception& ex)
	{
		cout << "Error: " << ex.what();
	}


	return 0;
}
