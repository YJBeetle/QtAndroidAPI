#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
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
	class ActivityManager_RunningTaskInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		android::content::ComponentName baseActivity();
		JString description();
		jint id();
		jint numActivities();
		jint numRunning();
		android::graphics::Bitmap thumbnail();
		android::content::ComponentName topActivity();
		
		// QJniObject forward
		template<typename ...Ts> explicit ActivityManager_RunningTaskInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ActivityManager_RunningTaskInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ActivityManager_RunningTaskInfo();
		
		// Methods
		jint describeContents() const;
		void readFromParcel(android::os::Parcel arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

