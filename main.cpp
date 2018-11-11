#include <SFML/Graphics.hpp>
#include <iostream>

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

	sf::RenderTexture render_texture;
	if (!render_texture.create(100,100)) { window.close(); }

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

		render_texture.clear();
		render_texture.draw(sprite);
		render_texture.display();

		const sf::Texture& texture = render_texture.getTexture();

		window.clear();
		window.draw(sprite);
		window.display();

		sprite.move(.01f, 0.0f);

    }

    return 0;
}
