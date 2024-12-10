#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include "gerenciadores/GerenciadorGrafico.hpp"
#include "gerenciadores/GerenciadorEventos.hpp"

class Jogo {
private:
    gerenciadores::Gerenciador_Grafico* pGG;
    gerenciadores::GerenciarEventos pGE;
public:
    Jogo();
    ~Jogo();
    void executar();
    //Menu menu;
    //Primeira_Fase 
};
