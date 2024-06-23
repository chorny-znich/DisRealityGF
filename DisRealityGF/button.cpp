#include "button.h"

namespace dr {
  Button::Button(sf::Vector2f size, sf::Text& text) :
    mPosition{ 0, 0 },
    mSize{ size },
    mText{ text },
    mShape{ size }
  {
    mShape.setPosition(mPosition);
    mText.setPosition({ mPosition.x + ((mSize.x - mText.getLocalBounds().width) / 2), 
      mPosition.y + ((mSize.y - mText.getLocalBounds().height) / 4) });
    mShape.setFillColor(sf::Color::Color(230, 231, 232));
  }

  void Button::render(sf::RenderWindow& window)
  {
    window.draw(mShape);
    window.draw(mText);
  }
  void Button::setPosition(sf::Vector2f pos)
  {
    mPosition = pos;
    mShape.setPosition(mPosition);
    mText.setPosition({ mPosition.x + ((mSize.x - mText.getLocalBounds().width) / 2),
     mPosition.y + ((mSize.y - mText.getLocalBounds().height) / 4) });
  }

  void Button::setFillColor(sf::Color color)
  {
    mShape.setFillColor(color);
  }

  bool Button::isClicked(sf::Vector2f pos)
  {
    if (mShape.getGlobalBounds().contains(pos)) {
      return true;
    }
      
    return false;
  }
}