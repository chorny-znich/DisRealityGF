#pragma once
#include "screen.h"
#include <string>
#include <unordered_map>
#include <memory>
//#include "game_state.h"

namespace dr
{
/**
 * @brief manage game's screens
 */
  class ScreenManager
  {
  private:
    std::unordered_map <std::string, std::unique_ptr<Screen>> mScreens;
  public:
    ScreenManager() = delete;
    template <typename ScreenPointer>
    static void createScreen(std::string screenId)
    {
      std::unique_ptr<ScreenPointer> pScreen = std::make_unique<ScreenPointer>();
      pScreen->init();
      //GameState::addScreen(std::move(pScreen));
    }
  };
}