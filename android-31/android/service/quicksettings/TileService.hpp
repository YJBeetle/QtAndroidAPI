#pragma once

#include "../../../JObject.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace android::app
{
	class Dialog;
}
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::service::quicksettings
{
	class Tile;
}

namespace android::service::quicksettings
{
	class TileService : public android::app::Service
	{
	public:
		// Fields
		static jstring ACTION_QS_TILE();
		static jstring ACTION_QS_TILE_PREFERENCES();
		static jstring META_DATA_ACTIVE_TILE();
		static jstring META_DATA_TOGGLEABLE_TILE();
		
		// QJniObject forward
		template<typename ...Ts> explicit TileService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		TileService(QJniObject obj);
		
		// Constructors
		TileService();
		
		// Methods
		static void requestListeningState(android::content::Context arg0, android::content::ComponentName arg1);
		android::service::quicksettings::Tile getQsTile();
		jboolean isLocked();
		jboolean isSecure();
		JObject onBind(android::content::Intent arg0);
		void onClick();
		void onDestroy();
		void onStartListening();
		void onStopListening();
		void onTileAdded();
		void onTileRemoved();
		void showDialog(android::app::Dialog arg0);
		void startActivityAndCollapse(android::content::Intent arg0);
		void unlockAndRun(JObject arg0);
	};
} // namespace android::service::quicksettings

