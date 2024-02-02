#pragma once

#include "../../JArray.hpp"
#include "./Application.def.hpp"
#include "./Notification.def.hpp"
#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../content/res/Configuration.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../java/io/PrintWriter.def.hpp"
#include "./Service.def.hpp"

namespace android::app
{
	// Fields
	inline jint Service::START_CONTINUATION_MASK()
	{
		return getStaticField<jint>(
			"android.app.Service",
			"START_CONTINUATION_MASK"
		);
	}
	inline jint Service::START_FLAG_REDELIVERY()
	{
		return getStaticField<jint>(
			"android.app.Service",
			"START_FLAG_REDELIVERY"
		);
	}
	inline jint Service::START_FLAG_RETRY()
	{
		return getStaticField<jint>(
			"android.app.Service",
			"START_FLAG_RETRY"
		);
	}
	inline jint Service::START_NOT_STICKY()
	{
		return getStaticField<jint>(
			"android.app.Service",
			"START_NOT_STICKY"
		);
	}
	inline jint Service::START_REDELIVER_INTENT()
	{
		return getStaticField<jint>(
			"android.app.Service",
			"START_REDELIVER_INTENT"
		);
	}
	inline jint Service::START_STICKY()
	{
		return getStaticField<jint>(
			"android.app.Service",
			"START_STICKY"
		);
	}
	inline jint Service::START_STICKY_COMPATIBILITY()
	{
		return getStaticField<jint>(
			"android.app.Service",
			"START_STICKY_COMPATIBILITY"
		);
	}
	inline jint Service::STOP_FOREGROUND_DETACH()
	{
		return getStaticField<jint>(
			"android.app.Service",
			"STOP_FOREGROUND_DETACH"
		);
	}
	inline jint Service::STOP_FOREGROUND_LEGACY()
	{
		return getStaticField<jint>(
			"android.app.Service",
			"STOP_FOREGROUND_LEGACY"
		);
	}
	inline jint Service::STOP_FOREGROUND_REMOVE()
	{
		return getStaticField<jint>(
			"android.app.Service",
			"STOP_FOREGROUND_REMOVE"
		);
	}
	
	// Constructors
	inline Service::Service()
		: android::content::ContextWrapper(
			"android.app.Service",
			"()V"
		) {}
	
	// Methods
	inline android::app::Application Service::getApplication() const
	{
		return callObjectMethod(
			"getApplication",
			"()Landroid/app/Application;"
		);
	}
	inline jint Service::getForegroundServiceType() const
	{
		return callMethod<jint>(
			"getForegroundServiceType",
			"()I"
		);
	}
	inline JObject Service::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void Service::onConfigurationChanged(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	inline void Service::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	inline void Service::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	inline void Service::onLowMemory() const
	{
		callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	inline void Service::onRebind(android::content::Intent arg0) const
	{
		callMethod<void>(
			"onRebind",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	inline void Service::onStart(android::content::Intent arg0, jint arg1) const
	{
		callMethod<void>(
			"onStart",
			"(Landroid/content/Intent;I)V",
			arg0.object(),
			arg1
		);
	}
	inline jint Service::onStartCommand(android::content::Intent arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"onStartCommand",
			"(Landroid/content/Intent;II)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void Service::onTaskRemoved(android::content::Intent arg0) const
	{
		callMethod<void>(
			"onTaskRemoved",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	inline void Service::onTimeout(jint arg0) const
	{
		callMethod<void>(
			"onTimeout",
			"(I)V",
			arg0
		);
	}
	inline void Service::onTrimMemory(jint arg0) const
	{
		callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0
		);
	}
	inline jboolean Service::onUnbind(android::content::Intent arg0) const
	{
		return callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
	inline void Service::startForeground(jint arg0, android::app::Notification arg1) const
	{
		callMethod<void>(
			"startForeground",
			"(ILandroid/app/Notification;)V",
			arg0,
			arg1.object()
		);
	}
	inline void Service::startForeground(jint arg0, android::app::Notification arg1, jint arg2) const
	{
		callMethod<void>(
			"startForeground",
			"(ILandroid/app/Notification;I)V",
			arg0,
			arg1.object(),
			arg2
		);
	}
	inline void Service::stopForeground(jboolean arg0) const
	{
		callMethod<void>(
			"stopForeground",
			"(Z)V",
			arg0
		);
	}
	inline void Service::stopForeground(jint arg0) const
	{
		callMethod<void>(
			"stopForeground",
			"(I)V",
			arg0
		);
	}
	inline void Service::stopSelf() const
	{
		callMethod<void>(
			"stopSelf",
			"()V"
		);
	}
	inline void Service::stopSelf(jint arg0) const
	{
		callMethod<void>(
			"stopSelf",
			"(I)V",
			arg0
		);
	}
	inline jboolean Service::stopSelfResult(jint arg0) const
	{
		return callMethod<jboolean>(
			"stopSelfResult",
			"(I)Z",
			arg0
		);
	}
} // namespace android::app

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
