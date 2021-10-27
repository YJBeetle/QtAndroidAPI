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
		static QAndroidJniObject CREATOR();
		
		AlarmManager_AlarmClockInfo(QAndroidJniObject obj);
		// Constructors
		AlarmManager_AlarmClockInfo(jlong &arg0, android::app::PendingIntent &arg1);
		AlarmManager_AlarmClockInfo() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getShowIntent();
		jlong getTriggerTime();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

