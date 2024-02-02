#pragma once

#include "./TaskInfo.def.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit ActivityManager_RunningTaskInfo(const char *className, const char *sig, Ts...agv) : android::app::TaskInfo(className, sig, std::forward<Ts>(agv)...) {}
		ActivityManager_RunningTaskInfo(QJniObject obj) : android::app::TaskInfo(obj) {}
		
		// Constructors
		ActivityManager_RunningTaskInfo();
		
		// Methods
		jint describeContents() const;
		void readFromParcel(android::os::Parcel arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

