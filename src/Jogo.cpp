#include "gerenciadores/GerenciadorGrafico.hpp"
#include "Jogo.hpp"


Jogo::Jogo() {
    pGG = gerenciadores::GerenciadorGrafico::getInstancia();
    pGE = gerenciadores::GerenciadorEventos::getInstancia();
    executar();
}

Jogo::~Jogo() {
    delete pGG;
    pGG = NULL;  
}

void Jogo::executar() {
    while (pGG->janelaAberta()) {
       pGG->clear();
       pGE->executar();
       pGG->display();

    }
}
