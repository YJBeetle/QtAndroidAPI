#pragma once

#include "../../__JniBaseClass.hpp"
#include "./TaskInfo.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class ActivityManager_RunningTaskInfo : public android::app::TaskInfo
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		jstring description();
		jint id();
		jint numRunning();
		QAndroidJniObject thumbnail();
		
		ActivityManager_RunningTaskInfo(QAndroidJniObject obj);
		// Constructors
		ActivityManager_RunningTaskInfo();
		
		// Methods
		jint describeContents();
		void readFromParcel(android::os::Parcel arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

