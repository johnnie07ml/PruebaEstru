#pragma once
#ifndef DATAFILE_H
#define DATAFILE_H
#include <fstream>

class DataFile {
public:
	DataFile();
	DataFile(char *);

	void abrir();
	void cerrar();
	void escribir(char*, int, int);
	char* leer(int, int);

	void setErchivo(char*);
private:
	char* direccion;
	std::fstream *archivo;
};

#endif