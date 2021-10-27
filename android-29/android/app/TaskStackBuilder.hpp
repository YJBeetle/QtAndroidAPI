#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class Activity;
}
namespace android::app
{
	class PendingIntent;
}
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Bundle;
}

namespace android::app
{
	class TaskStackBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		TaskStackBuilder(QAndroidJniObject obj);
		// Constructors
		TaskStackBuilder() = default;
		
		// Methods
		static QAndroidJniObject create(android::content::Context arg0);
		QAndroidJniObject addNextIntent(android::content::Intent arg0);
		QAndroidJniObject addNextIntentWithParentStack(android::content::Intent arg0);
		QAndroidJniObject addParentStack(android::app::Activity arg0);
		QAndroidJniObject addParentStack(android::content::ComponentName arg0);
		QAndroidJniObject addParentStack(jclass arg0);
		QAndroidJniObject editIntentAt(jint arg0);
		jint getIntentCount();
		jarray getIntents();
		QAndroidJniObject getPendingIntent(jint arg0, jint arg1);
		QAndroidJniObject getPendingIntent(jint arg0, jint arg1, android::os::Bundle arg2);
		void startActivities();
		void startActivities(android::os::Bundle arg0);
	};
} // namespace android::app

