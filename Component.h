#ifndef _COMPONENT_H_
#define _COMPONENT_H_

namespace Component {
        
    class Component {
    public:
        
    };

    class Movable : Component {
    public:
        virtual void move();
    };

    class Drawable : Component {
    public:
        virtual void draw(sf::RenderTexture &tex) const;
    };

    class Killable : Component {
    protected:
        int hp;
    public: 
        virtual void death();
        virtual void takeDamage();
    };

    class Aggressive : Component {
    public:
        virtual void attack();
    };
    
}
#endif
