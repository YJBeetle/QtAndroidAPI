#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app
{
	class ActivityManager_RunningServiceInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_FOREGROUND();
		static jint FLAG_PERSISTENT_PROCESS();
		static jint FLAG_STARTED();
		static jint FLAG_SYSTEM_PROCESS();
		jlong activeSince();
		jint clientCount();
		jint clientLabel();
		JString clientPackage();
		jint crashCount();
		jint flags();
		jboolean foreground();
		jlong lastActivityTime();
		jint pid();
		JString process();
		jlong restarting();
		android::content::ComponentName service();
		jboolean started();
		jint uid();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ActivityManager_RunningServiceInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ActivityManager_RunningServiceInfo(QAndroidJniObject obj);
		
		// Constructors
		ActivityManager_RunningServiceInfo();
		
		// Methods
		jint describeContents() const;
		void readFromParcel(android::os::Parcel arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

