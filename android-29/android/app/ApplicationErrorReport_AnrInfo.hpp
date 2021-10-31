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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ApplicationErrorReport_AnrInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ApplicationErrorReport_AnrInfo(QAndroidJniObject obj);
		
		// Constructors
		ApplicationErrorReport_AnrInfo();
		ApplicationErrorReport_AnrInfo(android::os::Parcel arg0);
		
		// Methods
		void dump(__JniBaseClass arg0, jstring arg1);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

