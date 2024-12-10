#pragma once
#include <SFML/Graphics.hpp>
#include "GerenciadorGrafico.hpp"

namespace gerenciadores {
    class GerenciadorInput {
    private:
        GerenciadorGrafico* pGG;
    public:
        GerenciadorInput();
        ~GerenciadorInput();

        void pressedInput(sf::Event::KeyEvent& key);
        void releasedInput(sf::Event::KeyEvent& key);
    };
}