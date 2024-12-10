#include "include/Ente.hpp"

Ente::Ente():
id(contador++)
{
}

Ente::~Ente() {
    //chamar a destrutora de pGG ?
    delete pGG;
    pGG = NULL;
}

void Ente::desenhar() {
    pGG = new gerenciadores::Gerenciador_Grafico();
}

int Ente::contador(0);