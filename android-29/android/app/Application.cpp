#include "../content/res/Configuration.hpp"
#include "./Application.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	Application::Application(QAndroidJniObject obj) : android::content::ContextWrapper(obj) {}
	
	// Constructors
	Application::Application()
		: android::content::ContextWrapper(
			"android.app.Application",
			"()V"
		) {}
	
	// Methods
	jstring Application::getProcessName()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.Application",
			"getProcessName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Application::onConfigurationChanged(android::content::res::Configuration arg0)
	{
		callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	void Application::onCreate()
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	void Application::onLowMemory()
	{
		callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	void Application::onTerminate()
	{
		callMethod<void>(
			"onTerminate",
			"()V"
		);
	}
	void Application::onTrimMemory(jint arg0)
	{
		callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0
		);
	}
	void Application::registerActivityLifecycleCallbacks(__JniBaseClass arg0)
	{
		callMethod<void>(
			"registerActivityLifecycleCallbacks",
			"(Landroid/app/Application$ActivityLifecycleCallbacks;)V",
			arg0.object()
		);
	}
	void Application::registerComponentCallbacks(__JniBaseClass arg0)
	{
		callMethod<void>(
			"registerComponentCallbacks",
			"(Landroid/content/ComponentCallbacks;)V",
			arg0.object()
		);
	}
	void Application::registerOnProvideAssistDataListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"registerOnProvideAssistDataListener",
			"(Landroid/app/Application$OnProvideAssistDataListener;)V",
			arg0.object()
		);
	}
	void Application::unregisterActivityLifecycleCallbacks(__JniBaseClass arg0)
	{
		callMethod<void>(
			"unregisterActivityLifecycleCallbacks",
			"(Landroid/app/Application$ActivityLifecycleCallbacks;)V",
			arg0.object()
		);
	}
	void Application::unregisterComponentCallbacks(__JniBaseClass arg0)
	{
		callMethod<void>(
			"unregisterComponentCallbacks",
			"(Landroid/content/ComponentCallbacks;)V",
			arg0.object()
		);
	}
	void Application::unregisterOnProvideAssistDataListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"unregisterOnProvideAssistDataListener",
			"(Landroid/app/Application$OnProvideAssistDataListener;)V",
			arg0.object()
		);
	}
} // namespace android::app

