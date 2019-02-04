#pragma once
#ifndef KNOWSIZE_H
#define KNOWSIZE_H
#include"DataFile.h"
struct KDat
{
	DataFile * file;
	int code;
	int sizeName;
	char* name;
	double salary;
	int sizeJob;
	char* job;
	KDat();
};
class Knowsice {
public:
	void Knowsice();
	DataFile* file();
	KDat actual;
	void print_register();
	char* toChar();
	void fromChar(char*);
	void open_file(char*);
	void write_into_file(char*);
	void read_from_file(int pos);
	void close_file();
	int get_size();
};
#endif // !KNOWSIZE_H
