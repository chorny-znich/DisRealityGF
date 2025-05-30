#pragma once
#include "asset_manager.h"
#include "engine_data.h"
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
	protected:
		Textures mTextureManager;
		Sounds mSoundManager;
		Fonts mFontManager;

		virtual void init() = 0;
	public:
		Engine();
		Engine(Engine& engine) = delete;
		Engine& operator=(const Engine& engine) = delete;

		void run();
	};
}