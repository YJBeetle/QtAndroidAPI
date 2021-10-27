#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net
{
	class DhcpInfo : public __JniBaseClass
	{
	public:
		// Fields
		jint dns1();
		jint dns2();
		jint gateway();
		jint ipAddress();
		jint leaseDuration();
		jint netmask();
		jint serverAddress();
		
		DhcpInfo(QAndroidJniObject obj);
		// Constructors
		DhcpInfo();
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

