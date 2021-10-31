#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class Activity;
}
namespace android::app
{
	class Application;
}
namespace android::app
{
	class Service;
}
namespace android::content
{
	class BroadcastReceiver;
}
namespace android::content
{
	class ContentProvider;
}
namespace android::content
{
	class Intent;
}
namespace android::content::pm
{
	class ApplicationInfo;
}
namespace java::lang
{
	class ClassLoader;
}

namespace android::app
{
	class AppComponentFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppComponentFactory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AppComponentFactory(QAndroidJniObject obj);
		
		// Constructors
		AppComponentFactory();
		
		// Methods
		QAndroidJniObject instantiateActivity(java::lang::ClassLoader arg0, jstring arg1, android::content::Intent arg2);
		QAndroidJniObject instantiateApplication(java::lang::ClassLoader arg0, jstring arg1);
		QAndroidJniObject instantiateClassLoader(java::lang::ClassLoader arg0, android::content::pm::ApplicationInfo arg1);
		QAndroidJniObject instantiateProvider(java::lang::ClassLoader arg0, jstring arg1);
		QAndroidJniObject instantiateReceiver(java::lang::ClassLoader arg0, jstring arg1, android::content::Intent arg2);
		QAndroidJniObject instantiateService(java::lang::ClassLoader arg0, jstring arg1, android::content::Intent arg2);
	};
} // namespace android::app

