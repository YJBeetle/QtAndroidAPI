#pragma once

#include "../../JObject.hpp"

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
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app
{
	class ActivityManager_RecentTaskInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		jint affiliatedTaskId();
		android::content::ComponentName baseActivity();
		android::content::Intent baseIntent();
		JString description();
		jint id();
		jint numActivities();
		android::content::ComponentName origActivity();
		jint persistentId();
		android::app::ActivityManager_TaskDescription taskDescription();
		android::content::ComponentName topActivity();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ActivityManager_RecentTaskInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ActivityManager_RecentTaskInfo(QAndroidJniObject obj);
		
		// Constructors
		ActivityManager_RecentTaskInfo();
		
		// Methods
		jint describeContents();
		void readFromParcel(android::os::Parcel arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

