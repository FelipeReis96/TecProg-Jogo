#include "Jogador.hpp" 

entidades::personagens::Jogador::Jogador() {

}

entidades::personagens::Jogador::~Jogador() {

}

entidades::personagens::Jogador::Jogador(std::string imgSprite) {
    pGG = gerenciadores::GerenciadorGrafico::getInstancia();
    if (pTextura.loadFromFile(imgSprite)) {
        std::cerr << "erro";
    }
    pSprite.setTexture(pTextura);
}

void entidades::personagens::Jogador::desenharJogador() {
    pGG->getJanela()->draw(pSprite);
}

void entidades::personagens::Jogador::moverJogador(char direcao, float vel) {
    if(direcao == 'c')
        pSprite.move(0, vel);
    if(direcao == 'b')
        pSprite.move(0, -vel);
    if(direcao == 'e')
        pSprite.move(-vel, 0);
    if(direcao == 'd')
        pSprite.move(vel,0);
    
}