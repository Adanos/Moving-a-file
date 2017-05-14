#include "MovingFile.hpp"

int main()
{
	std::string sourcePath, destinationPath;
	std::cin >> sourcePath >> destinationPath;
	MovingFile movingFile;

	std::cout << "Enter source and destination paths:" << std::endl;

	try
	{
		movingFile.moveFile(sourcePath, destinationPath);
	}
	catch (std::exception& e)
	{
		std::cerr << "exception caught: " << e.what() << '\n';
	}

	std::cout << std::endl;

	return 0;
}