#include "../../app/Dialog.hpp"
#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "./Tile.hpp"
#include "../../../JString.hpp"
#include "./TileService.hpp"

namespace android::service::quicksettings
{
	// Fields
	JString TileService::ACTION_QS_TILE()
	{
		return getStaticObjectField(
			"android.service.quicksettings.TileService",
			"ACTION_QS_TILE",
			"Ljava/lang/String;"
		);
	}
	JString TileService::ACTION_QS_TILE_PREFERENCES()
	{
		return getStaticObjectField(
			"android.service.quicksettings.TileService",
			"ACTION_QS_TILE_PREFERENCES",
			"Ljava/lang/String;"
		);
	}
	JString TileService::META_DATA_ACTIVE_TILE()
	{
		return getStaticObjectField(
			"android.service.quicksettings.TileService",
			"META_DATA_ACTIVE_TILE",
			"Ljava/lang/String;"
		);
	}
	JString TileService::META_DATA_TOGGLEABLE_TILE()
	{
		return getStaticObjectField(
			"android.service.quicksettings.TileService",
			"META_DATA_TOGGLEABLE_TILE",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	TileService::TileService(QAndroidJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	TileService::TileService()
		: android::app::Service(
			"android.service.quicksettings.TileService",
			"()V"
		) {}
	
	// Methods
	void TileService::requestListeningState(android::content::Context arg0, android::content::ComponentName arg1)
	{
		callStaticMethod<void>(
			"android.service.quicksettings.TileService",
			"requestListeningState",
			"(Landroid/content/Context;Landroid/content/ComponentName;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::service::quicksettings::Tile TileService::getQsTile()
	{
		return callObjectMethod(
			"getQsTile",
			"()Landroid/service/quicksettings/Tile;"
		);
	}
	jboolean TileService::isLocked()
	{
		return callMethod<jboolean>(
			"isLocked",
			"()Z"
		);
	}
	jboolean TileService::isSecure()
	{
		return callMethod<jboolean>(
			"isSecure",
			"()Z"
		);
	}
	JObject TileService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void TileService::onClick()
	{
		callMethod<void>(
			"onClick",
			"()V"
		);
	}
	void TileService::onDestroy()
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void TileService::onStartListening()
	{
		callMethod<void>(
			"onStartListening",
			"()V"
		);
	}
	void TileService::onStopListening()
	{
		callMethod<void>(
			"onStopListening",
			"()V"
		);
	}
	void TileService::onTileAdded()
	{
		callMethod<void>(
			"onTileAdded",
			"()V"
		);
	}
	void TileService::onTileRemoved()
	{
		callMethod<void>(
			"onTileRemoved",
			"()V"
		);
	}
	void TileService::showDialog(android::app::Dialog arg0)
	{
		callMethod<void>(
			"showDialog",
			"(Landroid/app/Dialog;)V",
			arg0.object()
		);
	}
	void TileService::startActivityAndCollapse(android::content::Intent arg0)
	{
		callMethod<void>(
			"startActivityAndCollapse",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void TileService::unlockAndRun(JObject arg0)
	{
		callMethod<void>(
			"unlockAndRun",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
} // namespace android::service::quicksettings

