#include "engine.h"

namespace dr {
	/**
	* @brief Handle system events. Close the game.
	*/
  void Engine::eventHandler() 
	{
    sf::Event event;
    while (mWindow.pollEvent(event)) {
			switch (event.type) {
			case sf::Event::Closed:
				mWindow.close();
				break;
			case sf::Event::KeyPressed:
				if (event.key.code == sf::Keyboard::Escape) {
					mWindow.close();
				}
				break; 
			case sf::Event::KeyReleased:
				break;
			case sf::Event::MouseButtonPressed:
				inputHandler(event.mouseButton.button, true, sf::Mouse::getPosition(), &mWindow);
				break;
			}
    }
  }
}