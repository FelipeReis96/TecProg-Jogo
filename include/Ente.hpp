#pragma once
#include "gerenciadores/GerenciadorGrafico.hpp"


class Ente {
protected:
    const int id;
    static int contador;
    static gerenciadores::GerenciadorGrafico* pGG; 
    static sf::Texture textura;

public:
    Ente();
    ~Ente();

    virtual void executar() = 0;
    virtual void desenhar() = 0;   
    const int getID() const {
        return id;
    }
};

