//Name: Nathan Garrett
//Date: 02/11/2022
//HW 04

#include <iostream>
#include <cstdio>

using namespace std;


void wavRead() {

	FILE* fp = fopen("example.wav", "rb");

	char fileType[4];
	int chunkSz;
	int size;
	short fmtType;
	short chnl;
	int smplRate;
	int avgBPS;
	short byPSamp;
	short btPSamp;
	int data;



	//Print out RIFF
	fread(fileType, sizeof(char), 4, fp);
	printf("File Attribute: ");
	for (int i = 0; i < 4; ++i) {
		printf("%c", fileType[i]);
	}
	printf(" ");

	//file size
	fread(&size, sizeof(int), 1, fp);
	//printf("%i", size);

	//WAVE format?
	fread(fileType, sizeof(char), 4, fp);
	for (int i = 0; i < 4; ++i) {
		printf("%c", fileType[i]);
	}
	printf("\n");

	//read "fmt "
	fread(fileType, sizeof(char), 4, fp);
	//for (int i = 0; i < 4; ++i) {
	//	printf("%c", fileType[i]);
	//}
	//printf("\n");

	//print out chunk size
	fread(&chunkSz, sizeof(int), 1, fp);
	printf("Chunk Size: %i\n", chunkSz);

	//print out format type
	fread(&fmtType, sizeof(short), 1, fp);
	printf("Format Type: %i\n", fmtType);

	//prints out channels
	fread(&chnl, sizeof(short), 1, fp);
	printf("Channels: %i\n", chnl);

	//prints out sample rate
	fread(&smplRate, sizeof(int), 1, fp);
	printf("Sample Rate: %i\n", smplRate);

	//prints average Bytes per Second
	fread(&avgBPS, sizeof(int), 1, fp);
	printf("Bytes per Second: %i\n", avgBPS);

	//Prints bytes per sample
	fread(&byPSamp, sizeof(short), 1, fp);
	printf("Average Bytes per Sample: %i\n", byPSamp);

	//Prints bits per sample
	fread(&btPSamp, sizeof(short), 1, fp);
	printf("Average Bits per Sample: %i\n", btPSamp);

	//Prints "data"
	fread(fileType, sizeof(char), 4, fp);
	printf("\n\nThe next section will print out the bytes for the data in the wav file\n\n");
	for (int i = 0; i < 4; ++i) {
		printf("%c", fileType[i]);
	}
	printf("\n\n");

    //halts the system so the user can read the above data first.
	system("pause");

	//Prints out the hex data from the file.
	int i = 0;
	for (; i < size; ++i) {
		fread(&data, sizeof(int), 1, fp);
		unsigned char* bytes = (unsigned char*)(&data);
		printf("%x %x %x %x\n", (int)bytes[3], (int)bytes[2], (int)bytes[1], (int)bytes[0]);
		bytes[4] = '\0';
	}

	fclose(fp);
}