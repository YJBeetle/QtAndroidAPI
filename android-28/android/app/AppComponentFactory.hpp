#pragma once

#include "../../JObject.hpp"

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
namespace java::lang
{
	class ClassLoader;
}
class JString;

namespace android::app
{
	class AppComponentFactory : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppComponentFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppComponentFactory(QAndroidJniObject obj);
		
		// Constructors
		AppComponentFactory();
		
		// Methods
		android::app::Activity instantiateActivity(java::lang::ClassLoader arg0, JString arg1, android::content::Intent arg2) const;
		android::app::Application instantiateApplication(java::lang::ClassLoader arg0, JString arg1) const;
		android::content::ContentProvider instantiateProvider(java::lang::ClassLoader arg0, JString arg1) const;
		android::content::BroadcastReceiver instantiateReceiver(java::lang::ClassLoader arg0, JString arg1, android::content::Intent arg2) const;
		android::app::Service instantiateService(java::lang::ClassLoader arg0, JString arg1, android::content::Intent arg2) const;
	};
} // namespace android::app

