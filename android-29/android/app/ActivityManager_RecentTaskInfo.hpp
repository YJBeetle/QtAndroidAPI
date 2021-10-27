#pragma once

#include "../../__JniBaseClass.hpp"
#include "./TaskInfo.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class ActivityManager_RecentTaskInfo : public android::app::TaskInfo
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		jint affiliatedTaskId();
		jstring description();
		jint id();
		jint persistentId();
		
		ActivityManager_RecentTaskInfo(QAndroidJniObject obj);
		// Constructors
		ActivityManager_RecentTaskInfo();
		
		// Methods
		jint describeContents();
		void readFromParcel(android::os::Parcel arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

