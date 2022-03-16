#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::os::health
{
	class TimerStat : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimerStat(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TimerStat(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		TimerStat();
		TimerStat(android::os::Parcel arg0);
		TimerStat(jint arg0, jlong arg1);
		
		// Methods
		jint describeContents() const;
		jint getCount() const;
		jlong getTime() const;
		void setCount(jint arg0) const;
		void setTime(jlong arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::os::health

