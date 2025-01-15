#include "engine.h"

namespace dr {
  /**
   * @brief Render the graphic from the current active screen
  */
  void Engine::render() {
    if (!mGameState.isEmpty()) {
      mWindow.clear(sf::Color::White);
      mGameState.getCurrent()->render(mWindow);
      ImGui::SFML::Render(mWindow);
      mWindow.display();
    }   
  }
}