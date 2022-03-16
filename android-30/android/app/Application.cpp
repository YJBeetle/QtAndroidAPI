#include "../content/res/Configuration.hpp"
#include "../../JString.hpp"
#include "./Application.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	Application::Application()
		: android::content::ContextWrapper(
			"android.app.Application",
			"()V"
		) {}
	
	// Methods
	JString Application::getProcessName()
	{
		return callStaticObjectMethod(
			"android.app.Application",
			"getProcessName",
			"()Ljava/lang/String;"
		);
	}
	void Application::onConfigurationChanged(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	void Application::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	void Application::onLowMemory() const
	{
		callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	void Application::onTerminate() const
	{
		callMethod<void>(
			"onTerminate",
			"()V"
		);
	}
	void Application::onTrimMemory(jint arg0) const
	{
		callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0
		);
	}
	void Application::registerActivityLifecycleCallbacks(JObject arg0) const
	{
		callMethod<void>(
			"registerActivityLifecycleCallbacks",
			"(Landroid/app/Application$ActivityLifecycleCallbacks;)V",
			arg0.object()
		);
	}
	void Application::registerComponentCallbacks(JObject arg0) const
	{
		callMethod<void>(
			"registerComponentCallbacks",
			"(Landroid/content/ComponentCallbacks;)V",
			arg0.object()
		);
	}
	void Application::registerOnProvideAssistDataListener(JObject arg0) const
	{
		callMethod<void>(
			"registerOnProvideAssistDataListener",
			"(Landroid/app/Application$OnProvideAssistDataListener;)V",
			arg0.object()
		);
	}
	void Application::unregisterActivityLifecycleCallbacks(JObject arg0) const
	{
		callMethod<void>(
			"unregisterActivityLifecycleCallbacks",
			"(Landroid/app/Application$ActivityLifecycleCallbacks;)V",
			arg0.object()
		);
	}
	void Application::unregisterComponentCallbacks(JObject arg0) const
	{
		callMethod<void>(
			"unregisterComponentCallbacks",
			"(Landroid/content/ComponentCallbacks;)V",
			arg0.object()
		);
	}
	void Application::unregisterOnProvideAssistDataListener(JObject arg0) const
	{
		callMethod<void>(
			"unregisterOnProvideAssistDataListener",
			"(Landroid/app/Application$OnProvideAssistDataListener;)V",
			arg0.object()
		);
	}
} // namespace android::app

