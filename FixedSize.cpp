#include "FixedSize.h"
#include <iostream>
#include <string.h>
using namespace std;

FDat::FDat() {
	file = new DataFile((char*)"FixedSize.dat");
}


void Fixed::print_register() {

	FDat temporal;//Esta es la estructura 

	cout << "Imprimiendo Archivo..." << endl;
	cout << "Nombre del archivo: " << temporal.file << endl;
	cout << "Codigo: " << temporal.code << endl;
	cout << "Nombre: " << temporal.name << endl;
	cout << "Salario: " << temporal.salary << endl;
	cout << "Puesto: " << temporal.job << endl;

}

char * Fixed::toChar() {

	char str[100];
	char * point;
	point = strtok(str, ";");

	while (point != NULL) {
		cout << point << endl;
		point = strtok(NULL, ";");
	}

	return point;

}

void Fixed::fromChar(char * datos) {

	const int size = 100;
	char from[size], to[size];

	strcpy_s(from, datos);
	memcpy(to, from, 100);
	printf(to);

}

void Fixed::open_file(char * archivo) {

	DataFile temporal;
	temporal.abrir;

}

void Fixed::write_into_file() {

	DataFile temporal;
	FDat registro;

	temporal.escribir(registro.name, registro.code, registro.salary);

}

void Fixed::read_from_file(int pos) {

	DataFile temporal;
	//RegistroFixed registro;

	if (temporal.abrir) {
		temporal.leer;
	}

	temporal.cerrar;

}

void Fixed::close_file() {

	DataFile temporal;
	temporal.cerrar;

}

int Fixed::get_size() {

	int metadata = sizeof(FDat);
	return metadata;
}