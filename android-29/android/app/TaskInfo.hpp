#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class ActivityManager_TaskDescription;
}
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Intent;
}

namespace android::app
{
	class TaskInfo : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject baseActivity();
		QAndroidJniObject baseIntent();
		jboolean isRunning();
		jint numActivities();
		QAndroidJniObject origActivity();
		QAndroidJniObject taskDescription();
		jint taskId();
		QAndroidJniObject topActivity();
		
		TaskInfo(QAndroidJniObject obj);
		// Constructors
		TaskInfo() = default;
		
		// Methods
		jstring toString();
	};
} // namespace android::app

