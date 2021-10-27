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
		
		ActivityManager_AppTask(QAndroidJniObject obj);
		// Constructors
		ActivityManager_AppTask() = default;
		
		// Methods
		void finishAndRemoveTask();
		QAndroidJniObject getTaskInfo();
		void moveToFront();
		void setExcludeFromRecents(jboolean arg0);
		void startActivity(android::content::Context arg0, android::content::Intent arg1, android::os::Bundle arg2);
	};
} // namespace android::app

