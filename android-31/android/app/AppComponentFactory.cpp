#include "./Activity.hpp"
#include "./Application.hpp"
#include "./Service.hpp"
#include "../content/BroadcastReceiver.hpp"
#include "../content/ContentProvider.hpp"
#include "../content/Intent.hpp"
#include "../content/pm/ApplicationInfo.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "../../JString.hpp"
#include "./AppComponentFactory.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	AppComponentFactory::AppComponentFactory(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AppComponentFactory::AppComponentFactory()
		: JObject(
			"android.app.AppComponentFactory",
			"()V"
		) {}
	
	// Methods
	android::app::Activity AppComponentFactory::instantiateActivity(java::lang::ClassLoader arg0, JString arg1, android::content::Intent arg2) const
	{
		return callObjectMethod(
			"instantiateActivity",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Intent;)Landroid/app/Activity;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	android::app::Application AppComponentFactory::instantiateApplication(java::lang::ClassLoader arg0, JString arg1) const
	{
		return callObjectMethod(
			"instantiateApplication",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;)Landroid/app/Application;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	java::lang::ClassLoader AppComponentFactory::instantiateClassLoader(java::lang::ClassLoader arg0, android::content::pm::ApplicationInfo arg1) const
	{
		return callObjectMethod(
			"instantiateClassLoader",
			"(Ljava/lang/ClassLoader;Landroid/content/pm/ApplicationInfo;)Ljava/lang/ClassLoader;",
			arg0.object(),
			arg1.object()
		);
	}
	android::content::ContentProvider AppComponentFactory::instantiateProvider(java::lang::ClassLoader arg0, JString arg1) const
	{
		return callObjectMethod(
			"instantiateProvider",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;)Landroid/content/ContentProvider;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::content::BroadcastReceiver AppComponentFactory::instantiateReceiver(java::lang::ClassLoader arg0, JString arg1, android::content::Intent arg2) const
	{
		return callObjectMethod(
			"instantiateReceiver",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Intent;)Landroid/content/BroadcastReceiver;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	android::app::Service AppComponentFactory::instantiateService(java::lang::ClassLoader arg0, JString arg1, android::content::Intent arg2) const
	{
		return callObjectMethod(
			"instantiateService",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Intent;)Landroid/app/Service;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
} // namespace android::app

