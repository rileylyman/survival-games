#include "Entity.h"

Entity::Entity(std::string name, Point position) :
   name{name}, 
   components{components},
   position(position)
{}

Entity::~Entity() {
    // Not filled in 
}

