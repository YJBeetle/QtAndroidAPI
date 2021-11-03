#pragma once

#include "../../../JObject.hpp"

namespace android::net::sip
{
	class SipProfile;
}
class JString;

namespace android::net::sip
{
	class SipProfile_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SipProfile_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SipProfile_Builder(QJniObject obj);
		
		// Constructors
		SipProfile_Builder(android::net::sip::SipProfile arg0);
		SipProfile_Builder(JString arg0);
		SipProfile_Builder(JString arg0, JString arg1);
		
		// Methods
		android::net::sip::SipProfile build() const;
		android::net::sip::SipProfile_Builder setAuthUserName(JString arg0) const;
		android::net::sip::SipProfile_Builder setAutoRegistration(jboolean arg0) const;
		android::net::sip::SipProfile_Builder setDisplayName(JString arg0) const;
		android::net::sip::SipProfile_Builder setOutboundProxy(JString arg0) const;
		android::net::sip::SipProfile_Builder setPassword(JString arg0) const;
		android::net::sip::SipProfile_Builder setPort(jint arg0) const;
		android::net::sip::SipProfile_Builder setProfileName(JString arg0) const;
		android::net::sip::SipProfile_Builder setProtocol(JString arg0) const;
		android::net::sip::SipProfile_Builder setSendKeepAlive(jboolean arg0) const;
	};
} // namespace android::net::sip

