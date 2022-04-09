#ifndef FILESTREAMBUF_H
#define FILESTREAMBUF_H

#include <iostream>
#include <fstream>


class FileStreamBuf : public std::streambuf {

private:

	FILE* f; 
	int length;
	char charArray[1024];
	

public:

	FileStreamBuf();
	FileStreamBuf(FILE* f);

	const FileStreamBuf(const FileStreamBuf& buf) = delete;
	virtual ~FileStreamBuf();


};

#endif
