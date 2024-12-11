#pragma once
#include <SFML/Graphics.hpp>
#include <list>
#include "GerenciadorGrafico.hpp"
#include "GerenciadorInput.hpp"
#include "Jogador.hpp"

namespace gerenciadores {
    class GerenciadorEventos {
    private:
        GerenciadorGrafico* pGG;
        static GerenciadorEventos* instancia;
        sf::Event evento;
        GerenciadorEventos();
        entidades::personagens::Jogador* pJogador;
    public:
        ~GerenciadorEventos();
        void executar();
        static GerenciadorEventos* getInstancia();
    };
}