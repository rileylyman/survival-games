#ifndef _DRAWABLE_H_
#define _DRAWABLE_H_

#include <SFML/Graphics.hpp>

class Drawable {
public:
	virtual void draw(sf::RenderTexture& tex) const=0;
};

#endif //_DRAWABLE_H_
