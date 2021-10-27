#include "../../app/Dialog.hpp"
#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "./Tile.hpp"
#include "./TileService.hpp"

namespace android::service::quicksettings
{
	// Fields
	jstring TileService::ACTION_QS_TILE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.quicksettings.TileService",
			"ACTION_QS_TILE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TileService::ACTION_QS_TILE_PREFERENCES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.quicksettings.TileService",
			"ACTION_QS_TILE_PREFERENCES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TileService::META_DATA_ACTIVE_TILE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.quicksettings.TileService",
			"META_DATA_ACTIVE_TILE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	TileService::TileService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TileService::TileService()
	{
		__thiz = QAndroidJniObject(
			"android.service.quicksettings.TileService",
			"()V"
		);
	}
	
	// Methods
	void TileService::requestListeningState(android::content::Context arg0, android::content::ComponentName arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.service.quicksettings.TileService",
			"requestListeningState",
			"(Landroid/content/Context;Landroid/content/ComponentName;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject TileService::getQsTile()
	{
		return __thiz.callObjectMethod(
			"getQsTile",
			"()Landroid/service/quicksettings/Tile;"
		);
	}
	jboolean TileService::isLocked()
	{
		return __thiz.callMethod<jboolean>(
			"isLocked",
			"()Z"
		);
	}
	jboolean TileService::isSecure()
	{
		return __thiz.callMethod<jboolean>(
			"isSecure",
			"()Z"
		);
	}
	QAndroidJniObject TileService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void TileService::onClick()
	{
		__thiz.callMethod<void>(
			"onClick",
			"()V"
		);
	}
	void TileService::onDestroy()
	{
		__thiz.callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void TileService::onStartListening()
	{
		__thiz.callMethod<void>(
			"onStartListening",
			"()V"
		);
	}
	void TileService::onStopListening()
	{
		__thiz.callMethod<void>(
			"onStopListening",
			"()V"
		);
	}
	void TileService::onTileAdded()
	{
		__thiz.callMethod<void>(
			"onTileAdded",
			"()V"
		);
	}
	void TileService::onTileRemoved()
	{
		__thiz.callMethod<void>(
			"onTileRemoved",
			"()V"
		);
	}
	void TileService::showDialog(android::app::Dialog arg0)
	{
		__thiz.callMethod<void>(
			"showDialog",
			"(Landroid/app/Dialog;)V",
			arg0.__jniObject().object()
		);
	}
	void TileService::startActivityAndCollapse(android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"startActivityAndCollapse",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void TileService::unlockAndRun(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"unlockAndRun",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::service::quicksettings

