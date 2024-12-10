#include "gerenciadores/GerenciadorGrafico.hpp"

namespace gerenciadores {

GerenciadorGrafico::GerenciadorGrafico()
    : pJanela(nullptr) {  // Inicializa como nullptr
    setVideoMode();
    setJanela();
}

GerenciadorGrafico::~GerenciadorGrafico() {
    if (pJanela) {
        delete pJanela;
    }
    pJanela = NULL;
}

void GerenciadorGrafico::setJanela() {
    // Exemplo de reconfiguração (caso necessário)
    if (pJanela) {
        pJanela->close();
        delete pJanela;
    }
    pJanela = new sf::RenderWindow(videoMode, "teste",sf::Style::Default);
}

sf::RenderWindow* GerenciadorGrafico::getJanela() const {
    return pJanela; // Retorna a referência à janela
}

void GerenciadorGrafico::setVideoMode(){
    videoMode.width = LARGURA;
    videoMode.height = ALTURA;
}
void GerenciadorGrafico::clear() {
    if (janelaAberta()) {
        if (pJanela)
        pJanela->clear(sf::Color::White);
    }
}
 // namespace gerenciadores
void GerenciadorGrafico::close() {
    if(janelaAberta) {
        if (pJanela) 
        pJanela->close();
    }
}
}