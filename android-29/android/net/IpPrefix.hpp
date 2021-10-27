#pragma once

#include "../../__JniBaseClass.hpp"

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
	class IpPrefix : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		IpPrefix(QAndroidJniObject obj);
		// Constructors
		IpPrefix() = default;
		
		// Methods
		jboolean contains(java::net::InetAddress arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getAddress();
		jint getPrefixLength();
		jbyteArray getRawAddress();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

