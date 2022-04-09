#ifndef FILESTREAMBUF_H
#define FILESTREAMBUF_H

#include <iostream>
#include <fstream>
#include <stdio.h>


class FileStreamBuf : public std::streambuf {

private:

	FILE* f; 
	int length = 0;
	char charArray[1024];
	char* buf = new char[length];
	
	
	

public:

	FileStreamBuf();
	FileStreamBuf(FILE* f);

	void fileClose();
	const FileStreamBuf(const FileStreamBuf& buf) = delete;
	virtual ~FileStreamBuf();

};
#endif
