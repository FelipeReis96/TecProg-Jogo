#pragma once
#include <SFML/Graphics.hpp>
#include <list>
#include "GerenciadorGrafico.hpp"
#include "GerenciadorInput.hpp"

namespace gerenciadores {
    class GerenciadorEventos {
    private:
        GerenciadorGrafico* pGG;
        static GerenciadorEventos* instancia;
        sf::Event evento;
        GerenciadorEventos();
    public:
        ~GerenciadorEventos();
        void executar();
        static GerenciadorEventos* getInstancia();
    };
}