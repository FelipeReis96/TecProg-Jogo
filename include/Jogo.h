#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Config.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

#include "gerenciadores/Gerenciador_Grafico.h"

class Jogo {
private:
    gerenciadores::Gerenciador_Grafico GG;
public:
    Jogo();
    ~Jogo();
    void executar();
};
