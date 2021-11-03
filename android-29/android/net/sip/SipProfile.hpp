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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SipProfile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SipProfile(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JString getAuthUserName() const;
		jboolean getAutoRegistration() const;
		JString getDisplayName() const;
		JString getPassword() const;
		jint getPort() const;
		JString getProfileName() const;
		JString getProtocol() const;
		JString getProxyAddress() const;
		jboolean getSendKeepAlive() const;
		JString getSipDomain() const;
		JString getUriString() const;
		JString getUserName() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::sip

