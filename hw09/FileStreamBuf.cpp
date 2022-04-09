#include "FileStreamBuf.h"
#include <iostream>

FileStreamBuf::FileStreamBuf() {

}

FileStreamBuf::FileStreamBuf(FILE* f) {

	setp(buf, buf + length);

	this->f = f;

}

void FileStreamBuf::fileClose() {

	fclose(f);
}

FileStreamBuf::~FileStreamBuf(){

}
