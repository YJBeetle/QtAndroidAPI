#pragma once

#ifndef ANDROID_APP_APPCOMPONENTFACTORY
#define ANDROID_APP_APPCOMPONENTFACTORY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::android::content::pm
{
	class ApplicationInfo;
}
namespace __jni_impl::android::app
{
	class Application;
}
namespace __jni_impl::android::app
{
	class Activity;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::content
{
	class BroadcastReceiver;
}
namespace __jni_impl::android::app
{
	class Service;
}
namespace __jni_impl::android::content
{
	class ContentProvider;
}

namespace __jni_impl::android::app
{
	class AppComponentFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject instantiateClassLoader(__jni_impl::java::lang::ClassLoader arg0, __jni_impl::android::content::pm::ApplicationInfo arg1);
		QAndroidJniObject instantiateApplication(__jni_impl::java::lang::ClassLoader arg0, jstring arg1);
		QAndroidJniObject instantiateActivity(__jni_impl::java::lang::ClassLoader arg0, jstring arg1, __jni_impl::android::content::Intent arg2);
		QAndroidJniObject instantiateReceiver(__jni_impl::java::lang::ClassLoader arg0, jstring arg1, __jni_impl::android::content::Intent arg2);
		QAndroidJniObject instantiateService(__jni_impl::java::lang::ClassLoader arg0, jstring arg1, __jni_impl::android::content::Intent arg2);
		QAndroidJniObject instantiateProvider(__jni_impl::java::lang::ClassLoader arg0, jstring arg1);
	};
} // namespace __jni_impl::android::app

#include "../../java/lang/ClassLoader.hpp"
#include "../content/pm/ApplicationInfo.hpp"
#include "Application.hpp"
#include "Activity.hpp"
#include "../content/Intent.hpp"
#include "../content/BroadcastReceiver.hpp"
#include "Service.hpp"
#include "../content/ContentProvider.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void AppComponentFactory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.AppComponentFactory",
			"()V");
	}
	
	// Methods
	QAndroidJniObject AppComponentFactory::instantiateClassLoader(__jni_impl::java::lang::ClassLoader arg0, __jni_impl::android::content::pm::ApplicationInfo arg1)
	{
		return __thiz.callObjectMethod(
			"instantiateClassLoader",
			"(Ljava/lang/ClassLoader;Landroid/content/pm/ApplicationInfo;)Ljava/lang/ClassLoader;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AppComponentFactory::instantiateApplication(__jni_impl::java::lang::ClassLoader arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"instantiateApplication",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;)Landroid/app/Application;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AppComponentFactory::instantiateActivity(__jni_impl::java::lang::ClassLoader arg0, jstring arg1, __jni_impl::android::content::Intent arg2)
	{
		return __thiz.callObjectMethod(
			"instantiateActivity",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Intent;)Landroid/app/Activity;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject AppComponentFactory::instantiateReceiver(__jni_impl::java::lang::ClassLoader arg0, jstring arg1, __jni_impl::android::content::Intent arg2)
	{
		return __thiz.callObjectMethod(
			"instantiateReceiver",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Intent;)Landroid/content/BroadcastReceiver;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject AppComponentFactory::instantiateService(__jni_impl::java::lang::ClassLoader arg0, jstring arg1, __jni_impl::android::content::Intent arg2)
	{
		return __thiz.callObjectMethod(
			"instantiateService",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Intent;)Landroid/app/Service;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject AppComponentFactory::instantiateProvider(__jni_impl::java::lang::ClassLoader arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"instantiateProvider",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;)Landroid/content/ContentProvider;",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class AppComponentFactory : public __jni_impl::android::app::AppComponentFactory
	{
	public:
		AppComponentFactory(QAndroidJniObject obj) { __thiz = obj; }
		AppComponentFactory()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_APPCOMPONENTFACTORY

