#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class GameState;
}

namespace android::app
{
	class GameManager : public JObject
	{
	public:
		// Fields
		static jint GAME_MODE_BATTERY();
		static jint GAME_MODE_PERFORMANCE();
		static jint GAME_MODE_STANDARD();
		static jint GAME_MODE_UNSUPPORTED();
		
		// QJniObject forward
		template<typename ...Ts> explicit GameManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GameManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint getGameMode() const;
		void setGameState(android::app::GameState arg0) const;
	};
} // namespace android::app

