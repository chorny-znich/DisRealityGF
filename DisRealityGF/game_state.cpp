#include "game_state.h"
#include <assert.h>

namespace dr {
  GameState* GameState::mpState = nullptr;

  GameState::GameState() {
    assert(mpState == nullptr);
    mpState = this;
  }

  /**
   * @brief Add game screen to stack
   * @param unique_ptr on game screen
  */
  void GameState::addScreen(std::unique_ptr<Screen> pScreen) {
    auto& screens = mpState->mScreens;
    screens.push(move(pScreen));
  }

  /**
   * @brief Pop game screen from stack
  */
  void GameState::destroyScreen() {
    auto& screens = mpState->mScreens;
    screens.pop();
  }

  /**
   * @brief Get active game screen
   * @return unique_ptr to active game screen
  */
  std::unique_ptr<Screen>& GameState::getCurrent()
  {
    auto& screens = mpState->mScreens;
    assert(!screens.empty());

    return screens.top();
  }

  /**
   * @brief Check if the stack of game screens empty
   * @return Are there any game screens in the stack
  */
  bool GameState::isEmpty() const
  {
    return mScreens.empty();
  }
}