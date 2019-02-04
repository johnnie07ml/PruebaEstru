#pragma once
#ifndef FIXEDSIZE_REGISTER_H
#define FIXEDSIZE_REGISTER_H

#include "DataFile.h"

struct FDat {

	DataFile * file;
	int code;
	char * name[30];
	double salary;
	char * job[20];

	FDat();

};

class Fixed{

public:

	void print_register();
	char * toChar();
	void fromChar(char *);
	void open_file(char *);
	void write_into_file();
	void read_from_file(int);
	void close_file();
	int get_size();

};

#endif // !FIXEDSIZE_REGISTER_H
