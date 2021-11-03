#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class ApplicationErrorReport_BatteryInfo : public JObject
	{
	public:
		// Fields
		jstring checkinDetails();
		jlong durationMicros();
		jstring usageDetails();
		jint usagePercent();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ApplicationErrorReport_BatteryInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ApplicationErrorReport_BatteryInfo(QAndroidJniObject obj);
		
		// Constructors
		ApplicationErrorReport_BatteryInfo();
		ApplicationErrorReport_BatteryInfo(android::os::Parcel arg0);
		
		// Methods
		void dump(JObject arg0, jstring arg1);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

