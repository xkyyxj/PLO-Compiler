#include "../header-file/FileReader.h"
#include <iostream>

int main(int argc,char** argv)
{
	char* filePath;
	if(argc < 2)
		std::cout<<"Need a file path!"<<std::endl;
	else
		filePath = argv[1];
	FileReader reader(filePath);
	char cha;
	while(reader.hasNext())
	{
		cha = reader.readChar();
		std::cout<<cha;
	}
	return 0;
}
