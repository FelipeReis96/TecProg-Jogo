#include "gerenciadores/GerenciadorGrafico.hpp"
#include "Jogo.hpp"


Jogo::Jogo() {
    pGG = new gerenciadores::GerenciadorGrafico();
    pGE = new gerenciadores::GerenciadorEventos();
    executar();
}

Jogo::~Jogo() {
    delete pGG;
    pGG = NULL;  
}

void Jogo::executar() {
    if (pGG) {
        while(pGG->getJanela()->isOpen()) {
            pGG->getJanela()->clear(sf::Color::White);
            pGG->getJanela()->display();
        }

    }
}
