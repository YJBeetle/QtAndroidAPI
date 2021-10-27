#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"

namespace __jni_impl::android::content::res
{
	class Configuration;
}

namespace __jni_impl::android::app
{
	class Application : public __jni_impl::android::content::ContextWrapper
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring getProcessName();
		void onConfigurationChanged(__jni_impl::android::content::res::Configuration arg0);
		void onCreate();
		void onLowMemory();
		void onTerminate();
		void onTrimMemory(jint arg0);
		void registerActivityLifecycleCallbacks(__jni_impl::__JniBaseClass arg0);
		void registerComponentCallbacks(__jni_impl::__JniBaseClass arg0);
		void registerOnProvideAssistDataListener(__jni_impl::__JniBaseClass arg0);
		void unregisterActivityLifecycleCallbacks(__jni_impl::__JniBaseClass arg0);
		void unregisterComponentCallbacks(__jni_impl::__JniBaseClass arg0);
		void unregisterOnProvideAssistDataListener(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::app

#include "../content/res/Configuration.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void Application::__constructor()
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
	void Application::onConfigurationChanged(__jni_impl::android::content::res::Configuration arg0)
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
	void Application::registerActivityLifecycleCallbacks(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"registerActivityLifecycleCallbacks",
			"(Landroid/app/Application$ActivityLifecycleCallbacks;)V",
			arg0.__jniObject().object()
		);
	}
	void Application::registerComponentCallbacks(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"registerComponentCallbacks",
			"(Landroid/content/ComponentCallbacks;)V",
			arg0.__jniObject().object()
		);
	}
	void Application::registerOnProvideAssistDataListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"registerOnProvideAssistDataListener",
			"(Landroid/app/Application$OnProvideAssistDataListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Application::unregisterActivityLifecycleCallbacks(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"unregisterActivityLifecycleCallbacks",
			"(Landroid/app/Application$ActivityLifecycleCallbacks;)V",
			arg0.__jniObject().object()
		);
	}
	void Application::unregisterComponentCallbacks(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"unregisterComponentCallbacks",
			"(Landroid/content/ComponentCallbacks;)V",
			arg0.__jniObject().object()
		);
	}
	void Application::unregisterOnProvideAssistDataListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"unregisterOnProvideAssistDataListener",
			"(Landroid/app/Application$OnProvideAssistDataListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Application : public __jni_impl::android::app::Application
	{
	public:
		Application(QAndroidJniObject obj) { __thiz = obj; }
		Application()
		{
			__constructor();
		}
	};
} // namespace android::app

