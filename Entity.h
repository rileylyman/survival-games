#ifndef _ENTITY_H_
#define _ENTITY_H_

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>

#include "Component.h"
#include "Point.h"
#include "Renderer.h"

class Entity : public Drawable {
private:
    // TODO: Still need to figure out how to apply components to a Entity
    // std::vector<Component> components;
    sf::Sprite sprite;

protected:
    Point position;

public:
    Entity(std::string name, sf::Sprite s, Point position=Point{0.0, 0.0});
    virtual ~Entity();

	void draw(sf::RenderTexture& tex) const override;

    inline sf::Sprite &getSprite() { return sprite; };
    // inline std::vector<Component> &getComponents() { return components; };
    inline Point &getPosition() { return position; };
    inline double getX() { return position.x_pos; };
    inline double getY() { return position.y_pos; };

};

// void draw(& sf::RenderTexture tex) override const;
#endif
