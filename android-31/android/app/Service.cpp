#include "../../JArray.hpp"
#include "./Application.hpp"
#include "./Notification.hpp"
#include "../content/Context.hpp"
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
		return getStaticField<jint>(
			"android.app.Service",
			"START_CONTINUATION_MASK"
		);
	}
	jint Service::START_FLAG_REDELIVERY()
	{
		return getStaticField<jint>(
			"android.app.Service",
			"START_FLAG_REDELIVERY"
		);
	}
	jint Service::START_FLAG_RETRY()
	{
		return getStaticField<jint>(
			"android.app.Service",
			"START_FLAG_RETRY"
		);
	}
	jint Service::START_NOT_STICKY()
	{
		return getStaticField<jint>(
			"android.app.Service",
			"START_NOT_STICKY"
		);
	}
	jint Service::START_REDELIVER_INTENT()
	{
		return getStaticField<jint>(
			"android.app.Service",
			"START_REDELIVER_INTENT"
		);
	}
	jint Service::START_STICKY()
	{
		return getStaticField<jint>(
			"android.app.Service",
			"START_STICKY"
		);
	}
	jint Service::START_STICKY_COMPATIBILITY()
	{
		return getStaticField<jint>(
			"android.app.Service",
			"START_STICKY_COMPATIBILITY"
		);
	}
	jint Service::STOP_FOREGROUND_DETACH()
	{
		return getStaticField<jint>(
			"android.app.Service",
			"STOP_FOREGROUND_DETACH"
		);
	}
	jint Service::STOP_FOREGROUND_REMOVE()
	{
		return getStaticField<jint>(
			"android.app.Service",
			"STOP_FOREGROUND_REMOVE"
		);
	}
	
	// QJniObject forward
	Service::Service(QJniObject obj) : android::content::ContextWrapper(obj) {}
	
	// Constructors
	Service::Service()
		: android::content::ContextWrapper(
			"android.app.Service",
			"()V"
		) {}
	
	// Methods
	android::app::Application Service::getApplication() const
	{
		return callObjectMethod(
			"getApplication",
			"()Landroid/app/Application;"
		);
	}
	jint Service::getForegroundServiceType() const
	{
		return callMethod<jint>(
			"getForegroundServiceType",
			"()I"
		);
	}
	JObject Service::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void Service::onConfigurationChanged(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	void Service::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	void Service::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void Service::onLowMemory() const
	{
		callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	void Service::onRebind(android::content::Intent arg0) const
	{
		callMethod<void>(
			"onRebind",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void Service::onStart(android::content::Intent arg0, jint arg1) const
	{
		callMethod<void>(
			"onStart",
			"(Landroid/content/Intent;I)V",
			arg0.object(),
			arg1
		);
	}
	jint Service::onStartCommand(android::content::Intent arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"onStartCommand",
			"(Landroid/content/Intent;II)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void Service::onTaskRemoved(android::content::Intent arg0) const
	{
		callMethod<void>(
			"onTaskRemoved",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void Service::onTrimMemory(jint arg0) const
	{
		callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0
		);
	}
	jboolean Service::onUnbind(android::content::Intent arg0) const
	{
		return callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
	void Service::startForeground(jint arg0, android::app::Notification arg1) const
	{
		callMethod<void>(
			"startForeground",
			"(ILandroid/app/Notification;)V",
			arg0,
			arg1.object()
		);
	}
	void Service::startForeground(jint arg0, android::app::Notification arg1, jint arg2) const
	{
		callMethod<void>(
			"startForeground",
			"(ILandroid/app/Notification;I)V",
			arg0,
			arg1.object(),
			arg2
		);
	}
	void Service::stopForeground(jboolean arg0) const
	{
		callMethod<void>(
			"stopForeground",
			"(Z)V",
			arg0
		);
	}
	void Service::stopForeground(jint arg0) const
	{
		callMethod<void>(
			"stopForeground",
			"(I)V",
			arg0
		);
	}
	void Service::stopSelf() const
	{
		callMethod<void>(
			"stopSelf",
			"()V"
		);
	}
	void Service::stopSelf(jint arg0) const
	{
		callMethod<void>(
			"stopSelf",
			"(I)V",
			arg0
		);
	}
	jboolean Service::stopSelfResult(jint arg0) const
	{
		return callMethod<jboolean>(
			"stopSelfResult",
			"(I)Z",
			arg0
		);
	}
} // namespace android::app

