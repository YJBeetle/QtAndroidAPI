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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TaskInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TaskInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring toString();
	};
} // namespace android::app

