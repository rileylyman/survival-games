#include <SFML/Graphics.hpp>
#include <iostream>
#include "Renderer.h"
#include "Entity.h"

int main() {

	const int WIDTH = 800;
	const int HEIGHT = 800;

  sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "Our Game");

	sf::Texture texture;
	if (!texture.loadFromFile("./textures/wood.png")) {
		std::cout << "Could not load texture" << std::endl;
	}

	sf::Sprite sprite;
	sprite.setTexture(texture);
	
	Entity e("some name", sprite);

	Renderer renderer(window);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

		renderer.render(e);

		sprite.move(.01f, 0.0f);

    }

    return 0;
}
