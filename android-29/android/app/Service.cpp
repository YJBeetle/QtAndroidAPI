#include "./Application.hpp"
#include "./Notification.hpp"
#include "../content/Intent.hpp"
#include "../content/res/Configuration.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "./Service.hpp"

namespace android::app
{
	// Fields
	jint Service::START_CONTINUATION_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Service",
			"START_CONTINUATION_MASK"
		);
	}
	jint Service::START_FLAG_REDELIVERY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Service",
			"START_FLAG_REDELIVERY"
		);
	}
	jint Service::START_FLAG_RETRY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Service",
			"START_FLAG_RETRY"
		);
	}
	jint Service::START_NOT_STICKY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Service",
			"START_NOT_STICKY"
		);
	}
	jint Service::START_REDELIVER_INTENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Service",
			"START_REDELIVER_INTENT"
		);
	}
	jint Service::START_STICKY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Service",
			"START_STICKY"
		);
	}
	jint Service::START_STICKY_COMPATIBILITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Service",
			"START_STICKY_COMPATIBILITY"
		);
	}
	jint Service::STOP_FOREGROUND_DETACH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Service",
			"STOP_FOREGROUND_DETACH"
		);
	}
	jint Service::STOP_FOREGROUND_REMOVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Service",
			"STOP_FOREGROUND_REMOVE"
		);
	}
	
	Service::Service(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Service::Service()
	{
		__thiz = QAndroidJniObject(
			"android.app.Service",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Service::getApplication()
	{
		return __thiz.callObjectMethod(
			"getApplication",
			"()Landroid/app/Application;"
		);
	}
	jint Service::getForegroundServiceType()
	{
		return __thiz.callMethod<jint>(
			"getForegroundServiceType",
			"()I"
		);
	}
	QAndroidJniObject Service::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void Service::onConfigurationChanged(android::content::res::Configuration arg0)
	{
		__thiz.callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object()
		);
	}
	void Service::onCreate()
	{
		__thiz.callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	void Service::onDestroy()
	{
		__thiz.callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void Service::onLowMemory()
	{
		__thiz.callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	void Service::onRebind(android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"onRebind",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void Service::onStart(android::content::Intent arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onStart",
			"(Landroid/content/Intent;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint Service::onStartCommand(android::content::Intent arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"onStartCommand",
			"(Landroid/content/Intent;II)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void Service::onTaskRemoved(android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"onTaskRemoved",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void Service::onTrimMemory(jint arg0)
	{
		__thiz.callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0
		);
	}
	jboolean Service::onUnbind(android::content::Intent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.__jniObject().object()
		);
	}
	void Service::startForeground(jint arg0, android::app::Notification arg1)
	{
		__thiz.callMethod<void>(
			"startForeground",
			"(ILandroid/app/Notification;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Service::startForeground(jint arg0, android::app::Notification arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"startForeground",
			"(ILandroid/app/Notification;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Service::stopForeground(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"stopForeground",
			"(Z)V",
			arg0
		);
	}
	void Service::stopForeground(jint arg0)
	{
		__thiz.callMethod<void>(
			"stopForeground",
			"(I)V",
			arg0
		);
	}
	void Service::stopSelf()
	{
		__thiz.callMethod<void>(
			"stopSelf",
			"()V"
		);
	}
	void Service::stopSelf(jint arg0)
	{
		__thiz.callMethod<void>(
			"stopSelf",
			"(I)V",
			arg0
		);
	}
	jboolean Service::stopSelfResult(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"stopSelfResult",
			"(I)Z",
			arg0
		);
	}
} // namespace android::app

