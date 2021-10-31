#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class AlarmManager_AlarmClockInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlarmManager_AlarmClockInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AlarmManager_AlarmClockInfo(QAndroidJniObject obj);
		
		// Constructors
		AlarmManager_AlarmClockInfo(jlong arg0, android::app::PendingIntent arg1);
		
		// Methods
		jint describeContents();
		android::app::PendingIntent getShowIntent();
		jlong getTriggerTime();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

