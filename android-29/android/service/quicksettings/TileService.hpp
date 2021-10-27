#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace __jni_impl::android::app
{
	class Dialog;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::service::quicksettings
{
	class Tile;
}

namespace __jni_impl::android::service::quicksettings
{
	class TileService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static jstring ACTION_QS_TILE();
		static jstring ACTION_QS_TILE_PREFERENCES();
		static jstring META_DATA_ACTIVE_TILE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static void requestListeningState(__jni_impl::android::content::Context arg0, __jni_impl::android::content::ComponentName arg1);
		QAndroidJniObject getQsTile();
		jboolean isLocked();
		jboolean isSecure();
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		void onClick();
		void onDestroy();
		void onStartListening();
		void onStopListening();
		void onTileAdded();
		void onTileRemoved();
		void showDialog(__jni_impl::android::app::Dialog arg0);
		void startActivityAndCollapse(__jni_impl::android::content::Intent arg0);
		void unlockAndRun(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::service::quicksettings

#include "../../app/Dialog.hpp"
#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "./Tile.hpp"

namespace __jni_impl::android::service::quicksettings
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
	
	// Constructors
	void TileService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.quicksettings.TileService",
			"()V"
		);
	}
	
	// Methods
	void TileService::requestListeningState(__jni_impl::android::content::Context arg0, __jni_impl::android::content::ComponentName arg1)
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
	QAndroidJniObject TileService::onBind(__jni_impl::android::content::Intent arg0)
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
	void TileService::showDialog(__jni_impl::android::app::Dialog arg0)
	{
		__thiz.callMethod<void>(
			"showDialog",
			"(Landroid/app/Dialog;)V",
			arg0.__jniObject().object()
		);
	}
	void TileService::startActivityAndCollapse(__jni_impl::android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"startActivityAndCollapse",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void TileService::unlockAndRun(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"unlockAndRun",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::service::quicksettings

namespace android::service::quicksettings
{
	class TileService : public __jni_impl::android::service::quicksettings::TileService
	{
	public:
		TileService(QAndroidJniObject obj) { __thiz = obj; }
		TileService()
		{
			__constructor();
		}
	};
} // namespace android::service::quicksettings

