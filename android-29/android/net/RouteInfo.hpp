#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class IpPrefix;
}
namespace android::os
{
	class Parcel;
}
namespace java::net
{
	class InetAddress;
}

namespace android::net
{
	class RouteInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		RouteInfo(QAndroidJniObject obj);
		// Constructors
		RouteInfo() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getDestination();
		QAndroidJniObject getGateway();
		jstring getInterface();
		jboolean hasGateway();
		jint hashCode();
		jboolean isDefaultRoute();
		jboolean matches(java::net::InetAddress arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

