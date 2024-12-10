#pragma once
#include<SFML/Graphics.hpp>
#include <map>

#define LARGURA 900
#define ALTURA 768

class Ente;
namespace gerenciadores {
    class GerenciadorGrafico {
    private:
        int id;
        sf::RenderWindow* pJanela;
        std::map<std::string, sf::Texture> texturas;
        sf::VideoMode videoMode;
        static GerenciadorGrafico* instancia;
        GerenciadorGrafico();

    public:
        ~GerenciadorGrafico();

        static GerenciadorGrafico* getInstancia();

        void setVideoMode();
        void setJanela();
        sf::RenderWindow* getJanela() const;
        bool janelaAberta() const {
            return pJanela->isOpen();
        }
        void display();
        void clear();
        void close();
    };
}