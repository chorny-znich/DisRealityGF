#include "engine.h"

namespace dr
{
	void Engine::update(sf::Time dt)
	{
		if (!mGameState.isEmpty()) {
			mGameState.getCurrent()->update(dt);
		}
	}
}