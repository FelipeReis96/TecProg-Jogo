#pragma once
#include <SFML/Graphics.hpp>
#include <list>
#include "GerenciadorGrafico.hpp"
#include "GerenciadorInput.hpp"

namespace gerenciadores {
    class GerenciadorEventos {
    private:
        GerenciadorGrafico* pGG;
        GerenciadorInput* pI;
    public:
        GerenciadorEventos();
        ~GerenciadorEventos();
        void gerenciar();
    };
}