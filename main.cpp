#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);


	
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

		sf::RenderTexture render_texture;
		if (!render_texture.create(500,500)) { window.close(); }

		render_texture.clear();
		render_texture.draw(shape);
		render_texture.display();

		const sf::Texture& texture = render_texture.getTexture();

		sf::Sprite sprite(texture);
		window.clear();
		window.draw(sprite);
		window.display();

    }

    return 0;
}
