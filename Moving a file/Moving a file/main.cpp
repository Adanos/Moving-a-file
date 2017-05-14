#include "MovingFile.hpp"

int main()
{
	std::string sourcePath, destinationPath;
	MovingFile movingFile;

	std::cout << "Enter source and destination paths:" << std::endl;
	std::cin >> sourcePath >> destinationPath;
	
	try
	{
		movingFile.moveFile(sourcePath, destinationPath);
	}
	catch (std::exception& e)
	{
		std::cerr << "exception caught: " << e.what() << '\n';
	}
	std::cin >> sourcePath;
	std::cout << std::endl;

	return 0;
}