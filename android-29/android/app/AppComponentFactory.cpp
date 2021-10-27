#include "./Activity.hpp"
#include "./Application.hpp"
#include "./Service.hpp"
#include "../content/BroadcastReceiver.hpp"
#include "../content/ContentProvider.hpp"
#include "../content/Intent.hpp"
#include "../content/pm/ApplicationInfo.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "./AppComponentFactory.hpp"

namespace android::app
{
	// Fields
	
	AppComponentFactory::AppComponentFactory(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AppComponentFactory::AppComponentFactory()
	{
		__thiz = QAndroidJniObject(
			"android.app.AppComponentFactory",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject AppComponentFactory::instantiateActivity(java::lang::ClassLoader arg0, jstring arg1, android::content::Intent arg2)
	{
		return __thiz.callObjectMethod(
			"instantiateActivity",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Intent;)Landroid/app/Activity;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject AppComponentFactory::instantiateActivity(java::lang::ClassLoader arg0, const QString &arg1, android::content::Intent arg2)
	{
		return __thiz.callObjectMethod(
			"instantiateActivity",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Intent;)Landroid/app/Activity;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject AppComponentFactory::instantiateApplication(java::lang::ClassLoader arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"instantiateApplication",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;)Landroid/app/Application;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AppComponentFactory::instantiateApplication(java::lang::ClassLoader arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"instantiateApplication",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;)Landroid/app/Application;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject AppComponentFactory::instantiateClassLoader(java::lang::ClassLoader arg0, android::content::pm::ApplicationInfo arg1)
	{
		return __thiz.callObjectMethod(
			"instantiateClassLoader",
			"(Ljava/lang/ClassLoader;Landroid/content/pm/ApplicationInfo;)Ljava/lang/ClassLoader;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AppComponentFactory::instantiateProvider(java::lang::ClassLoader arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"instantiateProvider",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;)Landroid/content/ContentProvider;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AppComponentFactory::instantiateProvider(java::lang::ClassLoader arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"instantiateProvider",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;)Landroid/content/ContentProvider;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject AppComponentFactory::instantiateReceiver(java::lang::ClassLoader arg0, jstring arg1, android::content::Intent arg2)
	{
		return __thiz.callObjectMethod(
			"instantiateReceiver",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Intent;)Landroid/content/BroadcastReceiver;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject AppComponentFactory::instantiateReceiver(java::lang::ClassLoader arg0, const QString &arg1, android::content::Intent arg2)
	{
		return __thiz.callObjectMethod(
			"instantiateReceiver",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Intent;)Landroid/content/BroadcastReceiver;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject AppComponentFactory::instantiateService(java::lang::ClassLoader arg0, jstring arg1, android::content::Intent arg2)
	{
		return __thiz.callObjectMethod(
			"instantiateService",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Intent;)Landroid/app/Service;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject AppComponentFactory::instantiateService(java::lang::ClassLoader arg0, const QString &arg1, android::content::Intent arg2)
	{
		return __thiz.callObjectMethod(
			"instantiateService",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Intent;)Landroid/app/Service;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
} // namespace android::app

