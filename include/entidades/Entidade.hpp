#include <SFML/Graphics.hpp>

namespace entidades {
    class Entidade {
    protected:
        static int contador;
        sf::Vector2f posicao;
        sf::Vector2f tamanho;
    public:
        Entidade();
        ~Entidade();
        virtual void executar() = 0;
        virtual void desenhar() = 0;
    };
}