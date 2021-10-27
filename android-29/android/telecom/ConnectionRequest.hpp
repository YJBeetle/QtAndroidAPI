#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
namespace android::telecom
{
	class Connection_RttTextStream;
}
namespace android::telecom
{
	class PhoneAccountHandle;
}

namespace android::telecom
{
	class ConnectionRequest : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		ConnectionRequest(QAndroidJniObject obj);
		// Constructors
		ConnectionRequest(android::telecom::PhoneAccountHandle &arg0, android::net::Uri &arg1, android::os::Bundle &arg2);
		ConnectionRequest(android::telecom::PhoneAccountHandle &arg0, android::net::Uri &arg1, android::os::Bundle &arg2, jint &arg3);
		ConnectionRequest() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getAccountHandle();
		QAndroidJniObject getAddress();
		QAndroidJniObject getExtras();
		QAndroidJniObject getRttTextStream();
		jint getVideoState();
		jboolean isRequestingRtt();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telecom

