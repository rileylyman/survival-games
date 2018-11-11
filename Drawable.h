#pragma once

class Drawable {
public:
	virtual void draw(sf::RenderTexture& tex) const;
};
