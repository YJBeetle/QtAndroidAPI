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
		
		ApplicationErrorReport_BatteryInfo(QAndroidJniObject obj);
		// Constructors
		ApplicationErrorReport_BatteryInfo();
		ApplicationErrorReport_BatteryInfo(android::os::Parcel &arg0);
		
		// Methods
		void dump(__JniBaseClass arg0, jstring arg1);
		void dump(__JniBaseClass arg0, const QString &arg1);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

