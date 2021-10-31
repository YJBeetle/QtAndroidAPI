#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::app
{
	class GameManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint GAME_MODE_BATTERY();
		static jint GAME_MODE_PERFORMANCE();
		static jint GAME_MODE_STANDARD();
		static jint GAME_MODE_UNSUPPORTED();
		
		// QJniObject forward
		template<typename ...Ts> explicit GameManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GameManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint getGameMode();
	};
} // namespace android::app

