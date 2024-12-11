#include "GerenciadorEventos.hpp"

namespace gerenciadores {
GerenciadorEventos* GerenciadorEventos::instancia = nullptr;  

GerenciadorEventos* GerenciadorEventos::getInstancia() {
    if(instancia == nullptr) {
        instancia = new GerenciadorEventos();
    }
    return instancia;
}

GerenciadorEventos::GerenciadorEventos() {
    pGG = GerenciadorGrafico::getInstancia();
    pJogador = new entidades::personagens::Jogador("spriteTeste.png");
}   

GerenciadorEventos::~GerenciadorEventos() {
    delete pGG;
    pGG = nullptr;
}

void GerenciadorEventos::executar() {
    while (pGG->getJanela()->pollEvent(evento)) {
        if(evento.type == sf::Event::Closed) {
             pGG->close();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
            pJogador->moverJogador('c', 7.0);
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
            pJogador->moverJogador('b', 7.0);
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
            pJogador->moverJogador('e', 7.0);
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
            pJogador->moverJogador('d', 7.0);
        }

    }
}


}

