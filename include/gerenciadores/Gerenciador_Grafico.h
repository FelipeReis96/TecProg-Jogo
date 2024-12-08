#pragma once
#include<SFML/Graphics.hpp>
#include <map>

#define LARGURA 900
#define ALTURA 768

class Ente;
namespace gerenciadores {
    class Gerenciador_Grafico {
    private:
        int id;
        sf::RenderWindow* pJanela;
        std::map<std::string, sf::Texture> texturas;
        sf::VideoMode videoMode;

    public:
        Gerenciador_Grafico();
        ~Gerenciador_Grafico();

        void setVideoMode();
        void setJanela();
        sf::RenderWindow* getJanela() const;
        bool janelaAberta() const {
            return pJanela->isOpen();
        }
    };  
}