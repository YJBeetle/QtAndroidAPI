#pragma once

#include "../../JObject.hpp"

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
	class ConnectionRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConnectionRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConnectionRequest(QAndroidJniObject obj);
		
		// Constructors
		ConnectionRequest(android::telecom::PhoneAccountHandle arg0, android::net::Uri arg1, android::os::Bundle arg2);
		ConnectionRequest(android::telecom::PhoneAccountHandle arg0, android::net::Uri arg1, android::os::Bundle arg2, jint arg3);
		
		// Methods
		jint describeContents();
		android::telecom::PhoneAccountHandle getAccountHandle();
		android::net::Uri getAddress();
		android::os::Bundle getExtras();
		android::telecom::Connection_RttTextStream getRttTextStream();
		jint getVideoState();
		jboolean isRequestingRtt();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telecom

