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
		EventStats(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		EventStats(android::app::usage::EventStats &arg0);
		
		// Methods
		void add(android::app::usage::EventStats arg0) const;
		jint describeContents() const;
		jint getCount() const;
		jint getEventType() const;
		jlong getFirstTimeStamp() const;
		jlong getLastEventTime() const;
		jlong getLastTimeStamp() const;
		jlong getTotalTime() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::usage

