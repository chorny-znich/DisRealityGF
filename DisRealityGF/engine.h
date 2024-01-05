#pragma once

#include <SFML/Graphics.hpp>
#include "engine_data.h"
#include "game_state.h"
//#include "asset_manager.h"
//#include "text_manager.h"
//#include <utility>

namespace dr {
  /**
   * @brief The game cycle managment.
   * The game class that contains the game cycle must derive this class and override virtual methods.
  */
  class Engine {
  private:
    sf::VideoMode mVideoMode;
    sf::RenderWindow mWindow;

    EngineConfig mEngineConfig;
    WindowConfig mWindowConfig;

    GameState mGameState;

    void eventHandler();
    
    void inputHandler(sf::Keyboard::Key key, bool isPressed);
    void inputHandler(sf::Mouse::Button button, bool isPressed, sf::Vector2i position, sf::RenderWindow* window);
    void update(sf::Time); 
    void render();

    void createWindow();
    std::pair<EngineConfig, WindowConfig> parseEngineConfig();

  protected:
  /*  Textures mTextureManager;
    Fonts mFontManager;
    TextManager mTextManager; */
    virtual void createStartScreen() = 0;
    virtual void init() = 0;

  public:
    Engine();
    Engine(Engine& engine) = delete;
    Engine& operator=(const Engine& engine) = delete;

    void run();

  };
}