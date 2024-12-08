#include "gerenciadores/Gerenciador_Grafico.h"

namespace gerenciadores {

Gerenciador_Grafico::Gerenciador_Grafico()
    : pJanela(nullptr) {  // Inicializa como nullptr
    setVideoMode();
    setJanela();
}

Gerenciador_Grafico::~Gerenciador_Grafico() {
    if (pJanela) {
        delete pJanela;
    }
    pJanela = NULL;
}

void Gerenciador_Grafico::setJanela() {
    // Exemplo de reconfiguração (caso necessário)
    if (pJanela) {
        pJanela->close();
        delete pJanela;
    }
    pJanela = new sf::RenderWindow(videoMode, "teste",sf::Style::Default);
}

sf::RenderWindow* Gerenciador_Grafico::getJanela() const {
    return pJanela; // Retorna a referência à janela
}

void Gerenciador_Grafico::setVideoMode(){
    videoMode.width = LARGURA;
    videoMode.height = ALTURA;
}
 // namespace gerenciadores
}