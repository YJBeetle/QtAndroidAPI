#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net
{
	class DhcpInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		jint dns1();
		jint dns2();
		jint gateway();
		jint ipAddress();
		jint leaseDuration();
		jint netmask();
		jint serverAddress();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DhcpInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DhcpInfo(QAndroidJniObject obj);
		
		// Constructors
		DhcpInfo();
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

