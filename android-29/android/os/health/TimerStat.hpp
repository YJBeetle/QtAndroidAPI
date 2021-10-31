#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::os::health
{
	class TimerStat : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		TimerStat(QAndroidJniObject obj);
		// Constructors
		TimerStat();
		TimerStat(android::os::Parcel arg0);
		TimerStat(jint arg0, jlong arg1);
		
		// Methods
		jint describeContents();
		jint getCount();
		jlong getTime();
		void setCount(jint arg0);
		void setTime(jlong arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os::health

