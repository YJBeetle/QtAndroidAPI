#pragma once

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
class JString;

namespace android::service::quicksettings
{
	class TileService : public android::app::Service
	{
	public:
		// Fields
		static JString ACTION_QS_TILE();
		static JString ACTION_QS_TILE_PREFERENCES();
		static JString META_DATA_ACTIVE_TILE();
		static JString META_DATA_TOGGLEABLE_TILE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TileService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		TileService(QAndroidJniObject obj);
		
		// Constructors
		TileService();
		
		// Methods
		static void requestListeningState(android::content::Context arg0, android::content::ComponentName arg1);
		android::service::quicksettings::Tile getQsTile() const;
		jboolean isLocked() const;
		jboolean isSecure() const;
		JObject onBind(android::content::Intent arg0) const;
		void onClick() const;
		void onDestroy() const;
		void onStartListening() const;
		void onStopListening() const;
		void onTileAdded() const;
		void onTileRemoved() const;
		void showDialog(android::app::Dialog arg0) const;
		void startActivityAndCollapse(android::content::Intent arg0) const;
		void unlockAndRun(JObject arg0) const;
	};
} // namespace android::service::quicksettings

