#pragma once

#include "../../JObject.hpp"

class JArray;
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
	class ActivityManager_RunningAppProcessInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint IMPORTANCE_BACKGROUND();
		static jint IMPORTANCE_CACHED();
		static jint IMPORTANCE_CANT_SAVE_STATE();
		static jint IMPORTANCE_EMPTY();
		static jint IMPORTANCE_FOREGROUND();
		static jint IMPORTANCE_FOREGROUND_SERVICE();
		static jint IMPORTANCE_GONE();
		static jint IMPORTANCE_PERCEPTIBLE();
		static jint IMPORTANCE_PERCEPTIBLE_PRE_26();
		static jint IMPORTANCE_SERVICE();
		static jint IMPORTANCE_TOP_SLEEPING();
		static jint IMPORTANCE_TOP_SLEEPING_PRE_28();
		static jint IMPORTANCE_VISIBLE();
		static jint REASON_PROVIDER_IN_USE();
		static jint REASON_SERVICE_IN_USE();
		static jint REASON_UNKNOWN();
		jint importance();
		jint importanceReasonCode();
		android::content::ComponentName importanceReasonComponent();
		jint importanceReasonPid();
		jint lastTrimLevel();
		jint lru();
		jint pid();
		JArray pkgList();
		JString processName();
		jint uid();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ActivityManager_RunningAppProcessInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ActivityManager_RunningAppProcessInfo(QAndroidJniObject obj);
		
		// Constructors
		ActivityManager_RunningAppProcessInfo();
		ActivityManager_RunningAppProcessInfo(JString arg0, jint arg1, JArray arg2);
		
		// Methods
		jint describeContents() const;
		void readFromParcel(android::os::Parcel arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

