#ifndef FILESTREAMBUF_H
#define FILESTREAMBUF_H

#include <iostream>
#include <fstream>
#include <stdio.h>


class FileStreamBuf : public std::streambuf {

private:

	FILE *f; 
	int length = 0;
	char charArray[1024];
	char* buf = new char[length];
	int c;
	
	
	

public:

	FileStreamBuf();
	FileStreamBuf(FILE* f);

	void fileClose();
	virtual int overflow(int c);
	virtual int sync();
	const FileStreamBuf(const FileStreamBuf& buf) = delete;
	virtual ~FileStreamBuf();

};
#endif
