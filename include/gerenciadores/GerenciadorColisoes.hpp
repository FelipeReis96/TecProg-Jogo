#pragma once
#include <SFML/Graphics.hpp>
#include "GerenciadorGrafico.hpp"
#include "entidades/Entidade.hpp"
#include <list>     

namespace gerenciadores {
    class GerenciadorColisoes {
    private:
        std::list<Entidade*> entes_dinamicos;
        std::list<Entidade*> entes_estaticos;

    public:
        Gerenciador_Colisoes();
        Gerenciador_Colisoes();
        void setDinamicos(Entidade* pE);
        void setEstaticos(Entidade* pE);
        void colisao(Entidade* ent, float dist_x, float dist_y, float size_x, float size_y, int id);

    };
}