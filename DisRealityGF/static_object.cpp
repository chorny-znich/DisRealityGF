#include "static_object.h"

void dr::StaticObject::render(sf::RenderWindow& window)
{
  window.draw(mSprite);
}