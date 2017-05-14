#pragma once
#include <string>
#include <iostream>
#include <fstream>
class MovingFile
{
public:
	MovingFile();
	~MovingFile();
	void moveFile(std::string& sourcePath, std::string& destinationPath);
};

