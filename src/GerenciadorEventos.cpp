#include "gerenciadores/GerenciadorEventos.hpp"

namespace gerenciadores {
GerenciadorEventos::GerenciadorEventos() {

}

GerenciadorEventos::~GerenciadorEventos() {

}

void GerenciadorEventos::gerenciar() {
    if (pGG) {
        sf::Event evento;
        while (pGG->getJanela()->pollEvent(evento)) {
            switch (evento.type) {

                    case sf::Event::Closed:
                        pGG->getJanela()->close();
                        break;      
                    }

                    
        }
    }
}

}

