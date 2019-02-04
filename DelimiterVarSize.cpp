#include"DelimiterVarSize.h"
#include <iostream>
#include <string.h>
using namespace std;

DDat::DDat() {
	file = new DataFile((char*)"DelimitedVarSize.dat");
}
void Delimiter::print_register() {
	DDat registro;

	cout << "Nombre del archivo: " << registro.file << endl;
	cout << "Codigo: " << registro.code << endl;
	cout << "Nombre: " << registro.name << endl;
	cout << "Salario: " << registro.salary << endl;
	cout << "Trabajo: " << registro.job << endl;
}

char * Delimiter::toChar() {
	char str[100];
	char * point;
	point = strtok_s(str, ";");

	while (point != NULL) {
		cout << point << endl;
		point = strtok_s(NULL, ";");
	}

	return point;
}
void Delimiter::fromChar(char * data) {

	const int size = 100;
	char from[size], to[size];

	strcpy_s(from, data);
	memcpy(to, from, 100);
	printf(to);

};

void Delimiter::open_file(char * file) {

	DataFile temporal;
	temporal.abrir;

};

void Delimiter::write_into_file() {

	DataFile temporal;
	DDat registro;

	temporal.escribir(registro.name, registro.code, registro.salary);

};

void Delimiter::read_from_file(int pos) {

	DataFile temporal;

	if (temporal.abrir) {
		temporal.leer;
	}

	temporal.cerrar;

};

void Delimiter::close_file() {

	DataFile temporal;
	temporal.cerrar;

};

int Delimiter::get_size() {
	int metadata = sizeof(DDat);
	return metadata;
};