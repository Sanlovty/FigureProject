#include <iostream>
#include "rectangle.h"

int main()
{
	try
	{
		Rectangle rectangle(0, 10, 10, 10, 10, 0, 0, 0);

		return 0;
	}
	catch (const exception& ex)
	{
		std::cout << "Error: " << ex.what();
	}


	return 0;
}
