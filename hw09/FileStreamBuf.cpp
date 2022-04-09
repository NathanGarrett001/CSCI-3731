#include "FileStreamBuf.h"
#include <iostream>

FileStreamBuf::FileStreamBuf() {

}

FileStreamBuf::FileStreamBuf(FILE* f) {

	this->f = f;

	fclose(f);
}

FileStreamBuf::~FileStreamBuf(){

}