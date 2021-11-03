#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::net::sip
{
	class SipProfile : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SipProfile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SipProfile(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		JString getAuthUserName();
		jboolean getAutoRegistration();
		JString getDisplayName();
		JString getPassword();
		jint getPort();
		JString getProfileName();
		JString getProtocol();
		JString getProxyAddress();
		jboolean getSendKeepAlive();
		JString getSipDomain();
		JString getUriString();
		JString getUserName();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::sip

