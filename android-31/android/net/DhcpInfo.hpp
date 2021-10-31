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
		static __JniBaseClass CREATOR();
		jint dns1();
		jint dns2();
		jint gateway();
		jint ipAddress();
		jint leaseDuration();
		jint netmask();
		jint serverAddress();
		
		// QJniObject forward
		template<typename ...Ts> explicit DhcpInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DhcpInfo(QJniObject obj);
		
		// Constructors
		DhcpInfo();
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

