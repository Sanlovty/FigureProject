#include <iostream>
#include <conio.h>
#include "circle.h"
#include "rectangle.h"
#include "square.h"
using std::endl;
using std::cout;

int main()
{
	try
	{
		bool isOpen = true;
		char symbol;
		while (isOpen)
		{
			if (!_kbhit())
			{
				system("cls");
				cout << "Menu:\n 1) Test rectangle class\n 2) Test square class\n 3) Test circle class\n 4) Exit";
				symbol = _getch();
				switch (symbol)
				{
				case '1':

					break;
				case '2':
					break;
				case '3':
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
