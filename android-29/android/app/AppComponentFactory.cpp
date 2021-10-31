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
	
	// QAndroidJniObject forward
	AppComponentFactory::AppComponentFactory(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AppComponentFactory::AppComponentFactory()
		: __JniBaseClass(
			"android.app.AppComponentFactory",
			"()V"
		) {}
	
	// Methods
	android::app::Activity AppComponentFactory::instantiateActivity(java::lang::ClassLoader arg0, jstring arg1, android::content::Intent arg2)
	{
		return callObjectMethod(
			"instantiateActivity",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Intent;)Landroid/app/Activity;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	android::app::Application AppComponentFactory::instantiateApplication(java::lang::ClassLoader arg0, jstring arg1)
	{
		return callObjectMethod(
			"instantiateApplication",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;)Landroid/app/Application;",
			arg0.object(),
			arg1
		);
	}
	java::lang::ClassLoader AppComponentFactory::instantiateClassLoader(java::lang::ClassLoader arg0, android::content::pm::ApplicationInfo arg1)
	{
		return callObjectMethod(
			"instantiateClassLoader",
			"(Ljava/lang/ClassLoader;Landroid/content/pm/ApplicationInfo;)Ljava/lang/ClassLoader;",
			arg0.object(),
			arg1.object()
		);
	}
	android::content::ContentProvider AppComponentFactory::instantiateProvider(java::lang::ClassLoader arg0, jstring arg1)
	{
		return callObjectMethod(
			"instantiateProvider",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;)Landroid/content/ContentProvider;",
			arg0.object(),
			arg1
		);
	}
	android::content::BroadcastReceiver AppComponentFactory::instantiateReceiver(java::lang::ClassLoader arg0, jstring arg1, android::content::Intent arg2)
	{
		return callObjectMethod(
			"instantiateReceiver",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Intent;)Landroid/content/BroadcastReceiver;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	android::app::Service AppComponentFactory::instantiateService(java::lang::ClassLoader arg0, jstring arg1, android::content::Intent arg2)
	{
		return callObjectMethod(
			"instantiateService",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Intent;)Landroid/app/Service;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
} // namespace android::app

