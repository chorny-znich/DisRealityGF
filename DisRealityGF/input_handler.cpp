#include "engine.h"

namespace dr
{
	void Engine::inputHandler(sf::Keyboard::Key key, bool isPressed)
	{
		if (!mGameState.isEmpty()) {
			mGameState.getCurrent()->inputHandler(key, isPressed);
		}
	}

	void Engine::inputHandler(sf::Mouse::Button button, bool isPressed, sf::Vector2i position, sf::RenderWindow* window)
	{
		if (!mGameState.isEmpty()) {
			mGameState.getCurrent()->inputHandler(button, isPressed, position, window);
		}
	}
}