#pragma once

#include <SFML/System.hpp>
#include <string>
//#include "asset_manager.h"

namespace dr {
//	using Textures = AssetManager<std::string, sf::Texture>;
//	using Fonts = AssetManager<std::string, sf::Font>;

	/**
	 * @brief the window's resolution state
	 * NATIVE for current desktop resolution
	 * CUSTOM for resolution from config file
	*/
	enum class ResolutionState {
		NATIVE,
		CUSTOM
	};

	/**
	 * @brief the window mode
	 * WINDOW for window mode
	 * FULLSCREEN for fullscreen mode
	*/
	enum class WindowMode {
		WINDOW,
		FULLSCREEN
	};

	/**
	 * @brief structure for the engine configuration, reading from 'config/engine_config.ini'
	 * mTitle -- the game title
	*/
	struct EngineConfig
	{
		std::string mTitle;
	};

	/**
		* @brief the structure for window configuration
		*
		* mResolutionState from ResolutionState enum {NATIVE: desktop resolution, CUSTOM: user resolution}
		* mResolution -- sf::vector2u(resolution.x, resolution.y) work if mResolutionState = CUSTOM
		* mWindowMode from WindowMode enum {WINDOW:, FULLSCREEN: }
		*/
	struct WindowConfig
	{
		ResolutionState mResolutionState;
		sf::Vector2u mResolution;
		WindowMode mWindowMode;
	};

	/**
	 * @brief All pathes to the engine's files
	*/
	inline namespace path {
		const std::string EngineConfigFile{ R"(config/engine_config.ini)" };
	}
/*
	inline namespace numbers {
		const size_t DefaultResolutionWidth{ 800 };
		const size_t DefaultResolutionHeight{ 600 };
	}*/
}