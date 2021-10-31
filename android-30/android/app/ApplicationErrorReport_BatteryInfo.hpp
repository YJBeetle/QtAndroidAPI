#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class ApplicationErrorReport_BatteryInfo : public __JniBaseClass
	{
	public:
		// Fields
		jstring checkinDetails();
		jlong durationMicros();
		jstring usageDetails();
		jint usagePercent();
		
		// QJniObject forward
		template<typename ...Ts> explicit ApplicationErrorReport_BatteryInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ApplicationErrorReport_BatteryInfo(QJniObject obj);
		
		// Constructors
		ApplicationErrorReport_BatteryInfo();
		ApplicationErrorReport_BatteryInfo(android::os::Parcel arg0);
		
		// Methods
		void dump(__JniBaseClass arg0, jstring arg1);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

