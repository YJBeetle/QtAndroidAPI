#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class ApplicationErrorReport_CrashInfo : public __JniBaseClass
	{
	public:
		// Fields
		jstring exceptionClassName();
		jstring exceptionMessage();
		jstring stackTrace();
		jstring throwClassName();
		jstring throwFileName();
		jint throwLineNumber();
		jstring throwMethodName();
		
		ApplicationErrorReport_CrashInfo(QAndroidJniObject obj);
		// Constructors
		ApplicationErrorReport_CrashInfo();
		ApplicationErrorReport_CrashInfo(android::os::Parcel arg0);
		ApplicationErrorReport_CrashInfo(jthrowable arg0);
		
		// Methods
		void dump(__JniBaseClass arg0, jstring arg1);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

