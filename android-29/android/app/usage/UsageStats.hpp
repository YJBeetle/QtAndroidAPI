#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app::usage
{
	class UsageStats : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit UsageStats(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UsageStats(QJniObject obj);
		
		// Constructors
		UsageStats(android::app::usage::UsageStats &arg0);
		
		// Methods
		void add(android::app::usage::UsageStats arg0);
		jint describeContents();
		jlong getFirstTimeStamp();
		jlong getLastTimeForegroundServiceUsed();
		jlong getLastTimeStamp();
		jlong getLastTimeUsed();
		jlong getLastTimeVisible();
		jstring getPackageName();
		jlong getTotalTimeForegroundServiceUsed();
		jlong getTotalTimeInForeground();
		jlong getTotalTimeVisible();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::usage

