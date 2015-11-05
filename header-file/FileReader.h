#include <iostream>
#include <fstream>

class FileReader{
private:
	char* fileName;
	int count;
	int readLength;
	char inputBuffer[1024];
	std::ifstream* in;
public:
	FileReader(char* mFileName);
	char readChar();
	bool hasNext();
};
