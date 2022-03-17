#pragma once

#include "../content/res/Configuration.def.hpp"
#include "../../JString.hpp"
#include "./Application.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline Application::Application()
		: android::content::ContextWrapper(
			"android.app.Application",
			"()V"
		) {}
	
	// Methods
	inline JString Application::getProcessName()
	{
		return callStaticObjectMethod(
			"android.app.Application",
			"getProcessName",
			"()Ljava/lang/String;"
		);
	}
	inline void Application::onConfigurationChanged(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	inline void Application::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	inline void Application::onLowMemory() const
	{
		callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	inline void Application::onTerminate() const
	{
		callMethod<void>(
			"onTerminate",
			"()V"
		);
	}
	inline void Application::onTrimMemory(jint arg0) const
	{
		callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0
		);
	}
	inline void Application::registerActivityLifecycleCallbacks(JObject arg0) const
	{
		callMethod<void>(
			"registerActivityLifecycleCallbacks",
			"(Landroid/app/Application$ActivityLifecycleCallbacks;)V",
			arg0.object()
		);
	}
	inline void Application::registerComponentCallbacks(JObject arg0) const
	{
		callMethod<void>(
			"registerComponentCallbacks",
			"(Landroid/content/ComponentCallbacks;)V",
			arg0.object()
		);
	}
	inline void Application::registerOnProvideAssistDataListener(JObject arg0) const
	{
		callMethod<void>(
			"registerOnProvideAssistDataListener",
			"(Landroid/app/Application$OnProvideAssistDataListener;)V",
			arg0.object()
		);
	}
	inline void Application::unregisterActivityLifecycleCallbacks(JObject arg0) const
	{
		callMethod<void>(
			"unregisterActivityLifecycleCallbacks",
			"(Landroid/app/Application$ActivityLifecycleCallbacks;)V",
			arg0.object()
		);
	}
	inline void Application::unregisterComponentCallbacks(JObject arg0) const
	{
		callMethod<void>(
			"unregisterComponentCallbacks",
			"(Landroid/content/ComponentCallbacks;)V",
			arg0.object()
		);
	}
	inline void Application::unregisterOnProvideAssistDataListener(JObject arg0) const
	{
		callMethod<void>(
			"unregisterOnProvideAssistDataListener",
			"(Landroid/app/Application$OnProvideAssistDataListener;)V",
			arg0.object()
		);
	}
} // namespace android::app

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"

