#include "KnowSize.h"
#include <iostream>
#include <string.h>
using namespace std;

KDat::KDat() {
	file = new DataFile((char*)"KnownVarSize.dat");
}


void Knowsice::print_register() {
	KDat temporal;

	cout << "Nombre del Archivo: " << temporal.file << endl;
	cout << "Codigo: " << temporal.code << endl;
	cout << "Tamano del nombre: " << temporal.sizeName << endl;
	cout << "Nombre: " << temporal.name << endl;
	cout << "Salario: " << temporal.salary << endl;
	cout << "Tamano del salario: " << temporal.salary << endl;
	cout << "Tamano del puesto: " << temporal.sizeJob << endl;
	cout << "Puesto: " << temporal.job << endl;
}


char* Knowsice::toChar() {
	char str[100];
	char * point;
	point = strtok_s(str, ";");

	while (point != NULL) {
		cout << point << endl;
		point = strtok_s(NULL, ";");
	}

	return point;
}
void Knowsice::fromChar(char* datos) {
	const int size = 100;
	char from[size], to[size];

	strcpy_s(from, datos);
	memcpy(to, from, 100);
	printf(to);
}

//archivo abrir y cerrar
void Knowsice::open_file(char* nom) {
	DataFile temporal;
	temporal.abrir;
}
void Knowsice::close_file() {
	DataFile temporal;
	temporal.cerrar;
}
void Knowsice::write_into_file(char *) {
	DataFile temporal;
	KDat registro;

	temporal.escribir(registro.name, registro.code, registro.salary);
}
void Knowsice::read_from_file(int pos) {

	DataFile temporal;

	if (temporal.abrir) {
		temporal.leer;
	}

	temporal.cerrar;
}
int Knowsice::get_size() {
	int metadata = sizeof(KDat);
	return metadata;
}