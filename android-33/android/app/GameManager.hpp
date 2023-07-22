#pragma once

#include "./GameState.def.hpp"
#include "./GameManager.def.hpp"

namespace android::app
{
	// Fields
	inline jint GameManager::GAME_MODE_BATTERY()
	{
		return getStaticField<jint>(
			"android.app.GameManager",
			"GAME_MODE_BATTERY"
		);
	}
	inline jint GameManager::GAME_MODE_PERFORMANCE()
	{
		return getStaticField<jint>(
			"android.app.GameManager",
			"GAME_MODE_PERFORMANCE"
		);
	}
	inline jint GameManager::GAME_MODE_STANDARD()
	{
		return getStaticField<jint>(
			"android.app.GameManager",
			"GAME_MODE_STANDARD"
		);
	}
	inline jint GameManager::GAME_MODE_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.app.GameManager",
			"GAME_MODE_UNSUPPORTED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint GameManager::getGameMode() const
	{
		return callMethod<jint>(
			"getGameMode",
			"()I"
		);
	}
	inline void GameManager::setGameState(android::app::GameState arg0) const
	{
		callMethod<void>(
			"setGameState",
			"(Landroid/app/GameState;)V",
			arg0.object()
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
