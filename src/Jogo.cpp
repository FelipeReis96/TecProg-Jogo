#include "gerenciadores/Gerenciador_Grafico.h"
#include "Jogo.h"


Jogo::Jogo() {
    GG = new gerenciadores::Gerenciador_Grafico();
    executar();
}

Jogo::~Jogo() {
    delete GG;
    GG = NULL;  
}

void Jogo::executar() {
    if (GG) {
        while(GG->getJanela()->isOpen()) {
            GG->getJanela()->clear(sf::Color::White);
            GG->getJanela()->display();
        }

    }
}
