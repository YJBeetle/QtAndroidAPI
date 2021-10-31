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
		
		// QJniObject forward
		template<typename ...Ts> explicit ApplicationErrorReport_CrashInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ApplicationErrorReport_CrashInfo(QJniObject obj);
		
		// Constructors
		ApplicationErrorReport_CrashInfo();
		ApplicationErrorReport_CrashInfo(android::os::Parcel arg0);
		ApplicationErrorReport_CrashInfo(jthrowable arg0);
		
		// Methods
		void dump(__JniBaseClass arg0, jstring arg1);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

