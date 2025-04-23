#include "engine.h"

namespace dr
{
  /**
   * @brief Render the graphyc from the current active screen
  */
  void Engine::render()
  {
    mWindow.clear(sf::Color::White);
    mWindow.display();
  }
}