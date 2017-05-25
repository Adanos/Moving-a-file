#include "MovingFile.hpp"

int main()
{
	std::string sourcePath, destinationPath;
	MovingFile movingFile;

	std::cout << "Enter source path: ";
	std::cin.sync();
	std::getline(std::cin, sourcePath);
	std::cin.clear();
	std::cout << "Enter destination path: ";
	std::getline(std::cin, destinationPath);
	
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