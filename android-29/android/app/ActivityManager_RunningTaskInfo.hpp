#pragma once

#include "./TaskInfo.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app
{
	class ActivityManager_RunningTaskInfo : public android::app::TaskInfo
	{
	public:
		// Fields
		static JObject CREATOR();
		JString description();
		jint id();
		jint numRunning();
		android::graphics::Bitmap thumbnail();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ActivityManager_RunningTaskInfo(const char *className, const char *sig, Ts...agv) : android::app::TaskInfo(className, sig, std::forward<Ts>(agv)...) {}
		ActivityManager_RunningTaskInfo(QAndroidJniObject obj);
		
		// Constructors
		ActivityManager_RunningTaskInfo();
		
		// Methods
		jint describeContents();
		void readFromParcel(android::os::Parcel arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

