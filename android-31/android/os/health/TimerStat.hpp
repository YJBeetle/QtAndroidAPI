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
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TimerStat(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TimerStat(QJniObject obj);
		
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

