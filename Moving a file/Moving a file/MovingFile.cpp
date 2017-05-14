#include "MovingFile.hpp"

MovingFile::MovingFile()
{
}

void MovingFile::moveFile(std::string sourcePath, std::string destinationPath)
{
	try
	{
		std::fstream sourceFile(sourcePath);
		std::fstream destinationFile(destinationPath);

		if (sourcePath == destinationPath)
			std::cerr << "Source file is the same as destination file" << std::endl;
		else
		{
			if (!sourceFile.good())
				std::cerr << "Source file doesn't exist " << sourcePath << std::endl;

			sourceFile.close();

			int status = std::rename(sourcePath.c_str(), destinationPath.c_str());

			if (status == -1 && !destinationFile.good())
				std::cerr << "Destination directory doesn't exist " << destinationPath << std::endl;

			destinationFile.close();

			std::cout << "status " << status << std::endl;
		}
	}
	catch (std::exception& e)
	{
		std::cerr << "exception caught: " << e.what() << '\n';
	}
}

MovingFile::~MovingFile()
{
}
