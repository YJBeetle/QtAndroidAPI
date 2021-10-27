#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class Activity;
}
namespace android::app
{
	class Instrumentation_ActivityResult;
}
namespace android::content
{
	class Intent;
}
namespace android::content
{
	class IntentFilter;
}

namespace android::app
{
	class Instrumentation_ActivityMonitor : public __JniBaseClass
	{
	public:
		// Fields
		
		Instrumentation_ActivityMonitor(QAndroidJniObject obj);
		// Constructors
		Instrumentation_ActivityMonitor();
		Instrumentation_ActivityMonitor(android::content::IntentFilter &arg0, android::app::Instrumentation_ActivityResult &arg1, jboolean &arg2);
		Instrumentation_ActivityMonitor(jstring &arg0, android::app::Instrumentation_ActivityResult &arg1, jboolean &arg2);
		Instrumentation_ActivityMonitor(const QString &arg0, android::app::Instrumentation_ActivityResult &arg1, jboolean &arg2);
		
		// Methods
		QAndroidJniObject getFilter();
		jint getHits();
		QAndroidJniObject getLastActivity();
		QAndroidJniObject getResult();
		jboolean isBlocking();
		QAndroidJniObject onStartActivity(android::content::Intent arg0);
		QAndroidJniObject waitForActivity();
		QAndroidJniObject waitForActivityWithTimeout(jlong arg0);
	};
} // namespace android::app

