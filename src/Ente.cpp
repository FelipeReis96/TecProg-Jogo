#include "Ente.hpp"

Ente::Ente():
id(contador++)
{
}

Ente::~Ente() {
    //chamar a destrutora de pGG ?
    pGG = NULL;
}

void Ente::desenhar() {
}

int Ente::contador(0);