#pragma once
#include <SFML/Graphics.hpp>

namespace dr
{
  /**
   * @brief A base class for all objects that don't changes in time
  */
  class StaticObject
  {
  private:
  protected:
    sf::Sprite mSprite;
  public:
    virtual void	init() = 0;
    virtual void	update(sf::Time dt) = 0;
    void	render(sf::RenderWindow& window);
  };
}