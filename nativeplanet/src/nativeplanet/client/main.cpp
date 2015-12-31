#include <SFML/Graphics.hpp>

int main(int argc, char** argv)
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.display();
    }

    return EXIT_SUCCESS;
}
