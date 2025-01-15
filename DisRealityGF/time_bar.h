#pragma once
#include <SFML/Graphics.hpp>

namespace dr
{
  /**
 * @brief GUI element
*/
  class TimeBar
  {
  private:
    sf::Vector2f mPosition;
    sf::Vector2f mTotalSize;
    sf::Vector2f mCurrentSize;
    sf::Color mColor{ sf::Color::Red };
    sf::RectangleShape mTimeBar;
    float mTotalTime;
    float mCurrentTime;
    float mWidthPerTime;
    bool mRunning{ false };
  public:
    void init(sf::Vector2f pos, sf::Vector2f size, float time);
    void start();
    void reset();
    void update(float dt);
    void render(sf::RenderWindow& window);
  };
}