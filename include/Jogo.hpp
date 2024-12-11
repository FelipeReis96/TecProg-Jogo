#pragma once
#include <SFML/Window.hpp>

#include "GerenciadorGrafico.hpp"
#include "GerenciadorEventos.hpp"

class Jogo {
private:
    gerenciadores::GerenciadorGrafico* pGG;
    gerenciadores::GerenciadorEventos* pGE;
public:
    Jogo();
    ~Jogo();
    void executar();
    //Menu menu;
    //Primeira_Fase 
};
