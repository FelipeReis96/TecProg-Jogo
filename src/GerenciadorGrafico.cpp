#include "gerenciadores/GerenciadorGrafico.hpp"

namespace gerenciadores {
    
GerenciadorGrafico* GerenciadorGrafico::instancia = nullptr;
GerenciadorGrafico::GerenciadorGrafico()
    {  // Inicializa como nullptr
    setVideoMode();
    setJanela();
}

GerenciadorGrafico::~GerenciadorGrafico() {
    if (pJanela) {
        delete pJanela;
    }
    pJanela = nullptr;
}

void GerenciadorGrafico::setJanela() {
    // Exemplo de reconfiguração (caso necessário)
    if (pJanela) {
        pJanela->close();
        delete pJanela;
    }
    pJanela = new sf::RenderWindow(videoMode, "teste");
    printf("setJanela");
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
        pJanela->clear(sf::Color::Black);
    }
}
 // namespace gerenciadores
void GerenciadorGrafico::close() {
    if(janelaAberta()) {
        pJanela->close();
    }
}
void GerenciadorGrafico::display() {
    if(janelaAberta())
        pJanela->display();
}

}