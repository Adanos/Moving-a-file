#include <iostream>

int main()
{
	try
	{
		
	}
	catch (std::invalid_argument& e)
	{
		std::cerr << "exception caught: " << e.what() << '\n';
	}
	catch (std::bad_alloc& e)
	{
		std::cerr << "exception caught: " << e.what() << '\n';
	}

	std::cout << std::endl;

	return 0;
}