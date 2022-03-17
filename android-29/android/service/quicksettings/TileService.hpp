#pragma once

#include "../../app/Dialog.def.hpp"
#include "../../content/ComponentName.def.hpp"
#include "../../content/Context.def.hpp"
#include "../../content/Intent.def.hpp"
#include "./Tile.def.hpp"
#include "../../../JString.hpp"
#include "./TileService.def.hpp"

namespace android::service::quicksettings
{
	// Fields
	inline JString TileService::ACTION_QS_TILE()
	{
		return getStaticObjectField(
			"android.service.quicksettings.TileService",
			"ACTION_QS_TILE",
			"Ljava/lang/String;"
		);
	}
	inline JString TileService::ACTION_QS_TILE_PREFERENCES()
	{
		return getStaticObjectField(
			"android.service.quicksettings.TileService",
			"ACTION_QS_TILE_PREFERENCES",
			"Ljava/lang/String;"
		);
	}
	inline JString TileService::META_DATA_ACTIVE_TILE()
	{
		return getStaticObjectField(
			"android.service.quicksettings.TileService",
			"META_DATA_ACTIVE_TILE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline TileService::TileService()
		: android::app::Service(
			"android.service.quicksettings.TileService",
			"()V"
		) {}
	
	// Methods
	inline void TileService::requestListeningState(android::content::Context arg0, android::content::ComponentName arg1)
	{
		callStaticMethod<void>(
			"android.service.quicksettings.TileService",
			"requestListeningState",
			"(Landroid/content/Context;Landroid/content/ComponentName;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::service::quicksettings::Tile TileService::getQsTile() const
	{
		return callObjectMethod(
			"getQsTile",
			"()Landroid/service/quicksettings/Tile;"
		);
	}
	inline jboolean TileService::isLocked() const
	{
		return callMethod<jboolean>(
			"isLocked",
			"()Z"
		);
	}
	inline jboolean TileService::isSecure() const
	{
		return callMethod<jboolean>(
			"isSecure",
			"()Z"
		);
	}
	inline JObject TileService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void TileService::onClick() const
	{
		callMethod<void>(
			"onClick",
			"()V"
		);
	}
	inline void TileService::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	inline void TileService::onStartListening() const
	{
		callMethod<void>(
			"onStartListening",
			"()V"
		);
	}
	inline void TileService::onStopListening() const
	{
		callMethod<void>(
			"onStopListening",
			"()V"
		);
	}
	inline void TileService::onTileAdded() const
	{
		callMethod<void>(
			"onTileAdded",
			"()V"
		);
	}
	inline void TileService::onTileRemoved() const
	{
		callMethod<void>(
			"onTileRemoved",
			"()V"
		);
	}
	inline void TileService::showDialog(android::app::Dialog arg0) const
	{
		callMethod<void>(
			"showDialog",
			"(Landroid/app/Dialog;)V",
			arg0.object()
		);
	}
	inline void TileService::startActivityAndCollapse(android::content::Intent arg0) const
	{
		callMethod<void>(
			"startActivityAndCollapse",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	inline void TileService::unlockAndRun(JObject arg0) const
	{
		callMethod<void>(
			"unlockAndRun",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
} // namespace android::service::quicksettings

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

