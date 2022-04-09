#pragma warning(disable : 4996)
#include "FileStreamBuf.h"
#include <iostream>
#include <fstream>

FileStreamBuf::FileStreamBuf() {

}

FileStreamBuf::FileStreamBuf(FILE* f) {

	setp(buf, buf + length);

	this->f = f;

}

void FileStreamBuf::fileClose() {

	fclose(f);
}

int FileStreamBuf::overflow(int c) {
	
	char* bytes = (char*)(&c);
	charArray[0] = c;
	setp((char*)(&c), buf + length);
	return c;
}
int FileStreamBuf::sync() {

	char* lastElement = pptr() - 1;
	char* amountLeft = 

}

FileStreamBuf::~FileStreamBuf(){

}
