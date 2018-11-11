#include "Entity.h"

Entity::Entity(std::string name, sf::Sprite s, Point position) :
   name{name},
   sprite(s), 
   position(position)
{}

Entity::~Entity() {
    // Not filled in 
}

void Entity::draw(sf::RenderTexture tex) const {
	tex.draw(sprite);
}

