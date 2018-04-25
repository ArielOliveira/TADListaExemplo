#include <iostream>

#include "lista.h"

int main() {
	List<double> *lista = new List<double>();

	double variavel = 22.23;

	lista->insertDoCuProRabo(variavel);

	lista->insertDoCuProRabo(-13.0f);

	lista->printList();

	return 0;
}