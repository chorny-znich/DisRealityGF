#include "engine.h"

namespace dr
{
  /**
  * @brief Default constructor.
  */
  Engine::Engine() :
    mVideoMode{1920, 1080},
    mWindow{mVideoMode, "DisRealityGF", sf::Style::Fullscreen}
  {
  }

  /**
   * @brief Game cycle
  */
  void Engine::run()
  {
    while (mWindow.isOpen()) {
      handleEvent();
      render();
    }
  }
}