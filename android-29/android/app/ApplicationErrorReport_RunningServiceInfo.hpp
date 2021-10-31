#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class ApplicationErrorReport_RunningServiceInfo : public __JniBaseClass
	{
	public:
		// Fields
		jlong durationMillis();
		jstring serviceDetails();
		
		ApplicationErrorReport_RunningServiceInfo(QAndroidJniObject obj);
		// Constructors
		ApplicationErrorReport_RunningServiceInfo();
		ApplicationErrorReport_RunningServiceInfo(android::os::Parcel arg0);
		
		// Methods
		void dump(__JniBaseClass arg0, jstring arg1);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

