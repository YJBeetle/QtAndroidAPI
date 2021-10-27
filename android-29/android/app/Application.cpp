#include "../content/res/Configuration.hpp"
#include "./Application.hpp"

namespace android::app
{
	// Fields
	
	Application::Application(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Application::Application()
	{
		__thiz = QAndroidJniObject(
			"android.app.Application",
			"()V"
		);
	}
	
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
		__thiz.callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object()
		);
	}
	void Application::onCreate()
	{
		__thiz.callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	void Application::onLowMemory()
	{
		__thiz.callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	void Application::onTerminate()
	{
		__thiz.callMethod<void>(
			"onTerminate",
			"()V"
		);
	}
	void Application::onTrimMemory(jint arg0)
	{
		__thiz.callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0
		);
	}
	void Application::registerActivityLifecycleCallbacks(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"registerActivityLifecycleCallbacks",
			"(Landroid/app/Application$ActivityLifecycleCallbacks;)V",
			arg0.__jniObject().object()
		);
	}
	void Application::registerComponentCallbacks(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"registerComponentCallbacks",
			"(Landroid/content/ComponentCallbacks;)V",
			arg0.__jniObject().object()
		);
	}
	void Application::registerOnProvideAssistDataListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"registerOnProvideAssistDataListener",
			"(Landroid/app/Application$OnProvideAssistDataListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Application::unregisterActivityLifecycleCallbacks(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"unregisterActivityLifecycleCallbacks",
			"(Landroid/app/Application$ActivityLifecycleCallbacks;)V",
			arg0.__jniObject().object()
		);
	}
	void Application::unregisterComponentCallbacks(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"unregisterComponentCallbacks",
			"(Landroid/content/ComponentCallbacks;)V",
			arg0.__jniObject().object()
		);
	}
	void Application::unregisterOnProvideAssistDataListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"unregisterOnProvideAssistDataListener",
			"(Landroid/app/Application$OnProvideAssistDataListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::app

