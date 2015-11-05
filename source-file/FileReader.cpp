#include "../header-file/FileReader.h"

FileReader::FileReader(char* mFileName)
{
	in = new std::ifstream(mFileName);
	in->read(inputBuffer,1024);
	readLength = in->gcount();
	count = 0;
};

char FileReader::readChar()
{
	//read a char from the file
	if(!in->eof())
	{
		in->read(inputBuffer,1024);
		readLength = in->gcount();
		count = 0;
	}
	if(count < readLength)
		return inputBuffer[count++];
	else
		return 0;
}

bool FileReader::hasNext()
{
	if(count < readLength)
		return true;
	else
		return false;
}
