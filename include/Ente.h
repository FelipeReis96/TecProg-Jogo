#pragma once
#include "gerenciadores/Gerenciador_Grafico.h"


class Ente {
protected:
    const int id;
    static gerenciadores::Gerenciador_Grafico* pGG; 

public:
    Ente();
    ~Ente();

    virtual void executar() = 0;
    void desenhar();
};

