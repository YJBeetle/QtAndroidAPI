#pragma once

#include "../../../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net::wifi::p2p::nsd
{
	class WifiP2pServiceInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint SERVICE_TYPE_ALL();
		static jint SERVICE_TYPE_BONJOUR();
		static jint SERVICE_TYPE_UPNP();
		static jint SERVICE_TYPE_VENDOR_SPECIFIC();
		
		WifiP2pServiceInfo(QAndroidJniObject obj);
		// Constructors
		WifiP2pServiceInfo() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::p2p::nsd

