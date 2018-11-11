#include <SFML/Graphics.hpp>
#include "Drawable.h"
#include <iostream>

#ifndef _RENDERER_H_
#define _RENDERER_H_

class Renderer {

private:
	sf::Color clearColor;
	sf::RenderTexture tex;
	sf::RenderWindow& window;

public:
	Renderer(sf::RenderWindow& win) 
		: window(win), 
		  clearColor(sf::Color::Black)
    {
		if (!this->tex.create(100,100)) { std::cout << "uh oh" << std::endl; }
	}
	
	~Renderer() {}


	void render(Drawable& d) {
		this->tex.clear();
		d.draw(tex);
		this->tex.display();
		
		const sf::Texture& texture = this->tex.getTexture();
		sf::Sprite sprite(texture);
		
		this->window.clear();
		this->window.draw(sprite);
		this->window.display();
	}

	void render(std::vector<Drawable*>& ds) {
		this->tex.clear();
		for (Drawable *d : ds) { d->draw(tex); }
		this->tex.display();
		
		const sf::Texture& texture = this->tex.getTexture();
		sf::Sprite sprite(texture);
		
		this->window.clear();
		this->window.draw(sprite);
		this->window.display();
	}

//	inline void setTexture(sf::RenderTexture rt) { this->tex = rt; }
	inline void setClearColor(sf::Color color) { this->clearColor = color; }

};

#endif // _RENDERER_H_
