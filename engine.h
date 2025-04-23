#pragma once
#include <SFML/Graphics.hpp>

namespace dr
{
	/**
	 * @brief The game cycle managment.
	 * A game class that contains the game cycle must derive this class and override virtual methods.
	 */
	class Engine
	{
	private:
		sf::VideoMode mVideoMode;
		sf::RenderWindow mWindow;

		void handleEvent();
		void render();
	public:
		Engine();
		Engine(Engine& engine) = delete;
		Engine& operator=(const Engine& engine) = delete;

		void run();
	};
}