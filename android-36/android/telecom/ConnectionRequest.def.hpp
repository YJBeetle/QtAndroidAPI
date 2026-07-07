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
class JString;

namespace android::telecom
{
	class ConnectionRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ConnectionRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConnectionRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ConnectionRequest(android::telecom::PhoneAccountHandle arg0, android::net::Uri arg1, android::os::Bundle arg2);
		ConnectionRequest(android::telecom::PhoneAccountHandle arg0, android::net::Uri arg1, android::os::Bundle arg2, jint arg3);
		
		// Methods
		jint describeContents() const;
		android::telecom::PhoneAccountHandle getAccountHandle() const;
		android::net::Uri getAddress() const;
		android::os::Bundle getExtras() const;
		JObject getParticipants() const;
		android::telecom::Connection_RttTextStream getRttTextStream() const;
		jint getVideoState() const;
		jboolean isAdhocConferenceCall() const;
		jboolean isRequestingRtt() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telecom

