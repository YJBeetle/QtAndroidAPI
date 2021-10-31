#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class ApplicationErrorReport_AnrInfo : public __JniBaseClass
	{
	public:
		// Fields
		jstring activity();
		jstring cause();
		jstring info();
		
		ApplicationErrorReport_AnrInfo(QAndroidJniObject obj);
		// Constructors
		ApplicationErrorReport_AnrInfo();
		ApplicationErrorReport_AnrInfo(android::os::Parcel arg0);
		
		// Methods
		void dump(__JniBaseClass arg0, jstring arg1);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

