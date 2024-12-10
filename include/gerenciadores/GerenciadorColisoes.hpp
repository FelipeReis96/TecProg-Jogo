#pragma once
#include <SFML/Graphics.hpp>
#include "GerenciadorGrafico.hpp"
#include "entidades/Entidade.hpp"
#include <list>     

namespace gerenciadores {
    class GerenciadorColisoes {
    private:
        std::list<entidades::Entidade*> entes_dinamicos;
        std::list<entidades::Entidade*> entes_estaticos;

    public:
        GerenciadorColisoes();
        GerenciadorColisoes();
        void setDinamicos(entidades::Entidade* pE);
        void setEstaticos(entidades::Entidade* pE);
        void colisao(entidades::Entidade* ent, float dist_x, float dist_y, float size_x, float size_y, int id);

    };
}