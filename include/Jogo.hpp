#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include "gerenciadores/GerenciadorGrafico.hpp"
#include "gerenciadores/GerenciadorEventos.hpp"

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
