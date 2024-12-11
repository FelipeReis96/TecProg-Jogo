#pragma once

#include "GerenciadorGrafico.hpp"
#include <iostream>


namespace entidades {
    namespace personagens {
        class Jogador {
        private:
            sf::Texture pTextura;
            sf::Sprite pSprite;
            float velocidade;
            gerenciadores::GerenciadorGrafico* pGG;
        public:
            Jogador();
            ~Jogador();
            Jogador(std::string imgSprite);
            void moverJogador(char direcao, float vel);
            void desenharJogador();
        }; 
    }
}