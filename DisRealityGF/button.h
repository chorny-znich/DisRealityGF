#pragma once

#include <SFML/Graphics.hpp>

namespace dr {
  class Button
  {
  private:
    sf::Vector2f mPosition;
    sf::Vector2f mSize;
    sf::Text& mText;
    sf::RectangleShape mShape;

  public:
    Button(sf::Vector2f size, sf::Text& text);
    void render(sf::RenderWindow& window);
    void setPosition(sf::Vector2f pos);
    void setFillColor(sf::Color color);
    bool isClicked(sf::Vector2f pos);
  };
}