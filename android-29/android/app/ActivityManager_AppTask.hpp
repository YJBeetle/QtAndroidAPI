#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class ActivityManager_RecentTaskInfo;
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
	class ActivityManager_AppTask : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ActivityManager_AppTask(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ActivityManager_AppTask(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void finishAndRemoveTask();
		android::app::ActivityManager_RecentTaskInfo getTaskInfo();
		void moveToFront();
		void setExcludeFromRecents(jboolean arg0);
		void startActivity(android::content::Context arg0, android::content::Intent arg1, android::os::Bundle arg2);
	};
} // namespace android::app

