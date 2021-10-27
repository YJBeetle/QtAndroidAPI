#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app::usage
{
	class EventStats : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		EventStats(QAndroidJniObject obj);
		// Constructors
		EventStats(android::app::usage::EventStats &arg0);
		EventStats() = default;
		
		// Methods
		void add(android::app::usage::EventStats arg0);
		jint describeContents();
		jint getCount();
		jint getEventType();
		jlong getFirstTimeStamp();
		jlong getLastEventTime();
		jlong getLastTimeStamp();
		jlong getTotalTime();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::usage

