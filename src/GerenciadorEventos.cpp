#include "gerenciadores/GerenciadorEventos.hpp"

namespace gerenciadores {
Gerenciador_Eventos::Gerenciador_Eventos() {

}

Gerenciador_Eventos::~Gerenciador_Eventos() {

}

void Gerenciador_Eventos::gerenciar() {
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

