#include "dynamic_object.h"

namespace dr {
  void dr::DynamicObject::render(sf::RenderWindow& window)
  {
    window.draw(mSprite);
  }
}