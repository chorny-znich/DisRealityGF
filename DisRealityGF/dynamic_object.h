#pragma once
#include <SFML/Graphics.hpp>

namespace dr {
  /**
 * @brief A base class for all objects that changes in time
*/
  class DynamicObject
  {
  private:
  protected:
    sf::Sprite mSprite;
    bool mActive{ false };
    float mSpeed{ 0.f };
  public:
    virtual void	init() = 0;
    virtual void	update(sf::Time dt) = 0;
    void	render(sf::RenderWindow& window);
  };
}