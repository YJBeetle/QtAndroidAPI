#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace java::net
{
	class Inet6Address;
}

namespace android::net::wifi::aware
{
	class WifiAwareNetworkInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		WifiAwareNetworkInfo(QAndroidJniObject obj);
		// Constructors
		WifiAwareNetworkInfo() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getPeerIpv6Addr();
		jint getPort();
		jint getTransportProtocol();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::aware

