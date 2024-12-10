#include "gerenciadores/GerenciadorEventos.hpp"

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
    }
}


}

