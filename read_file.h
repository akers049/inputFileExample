#ifndef READ_FILE_H
#define READ_FILE_H

#include <fstream>
#include <stdio.h>

#define MAXLINE 1024

class some_data
{

public:
	some_data(){};
	~some_data(){};

	double someVal1 = 0.0;
	double someVal2 = 0.0;
	unsigned int someSize1 = 0;
	unsigned int someSize2 = 0;
	char someChar[MAXLINE];
};

class read_file
{
public:
	read_file(){};
	~read_file(){};

	void readInputFile(char* filename, some_data &dat);

private:
	void getNextDataLine( FILE* const filePtr, char* nextLinePtr,
                          int const maxSize, int* const endOfFileFlag);
};

#endif