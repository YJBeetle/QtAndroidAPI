#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app::usage
{
	class EventStats : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EventStats(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EventStats(QAndroidJniObject obj);
		
		// Constructors
		EventStats(android::app::usage::EventStats &arg0);
		
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

