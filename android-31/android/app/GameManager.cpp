#include "./GameManager.hpp"

namespace android::app
{
	// Fields
	jint GameManager::GAME_MODE_BATTERY()
	{
		return getStaticField<jint>(
			"android.app.GameManager",
			"GAME_MODE_BATTERY"
		);
	}
	jint GameManager::GAME_MODE_PERFORMANCE()
	{
		return getStaticField<jint>(
			"android.app.GameManager",
			"GAME_MODE_PERFORMANCE"
		);
	}
	jint GameManager::GAME_MODE_STANDARD()
	{
		return getStaticField<jint>(
			"android.app.GameManager",
			"GAME_MODE_STANDARD"
		);
	}
	jint GameManager::GAME_MODE_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.app.GameManager",
			"GAME_MODE_UNSUPPORTED"
		);
	}
	
	// QAndroidJniObject forward
	GameManager::GameManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint GameManager::getGameMode()
	{
		return callMethod<jint>(
			"getGameMode",
			"()I"
		);
	}
} // namespace android::app

