#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net::sip
{
	class SipProfile;
}

namespace android::net::sip
{
	class SipProfile_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SipProfile_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SipProfile_Builder(QJniObject obj);
		
		// Constructors
		SipProfile_Builder(android::net::sip::SipProfile arg0);
		SipProfile_Builder(jstring arg0);
		SipProfile_Builder(jstring arg0, jstring arg1);
		
		// Methods
		android::net::sip::SipProfile build();
		android::net::sip::SipProfile_Builder setAuthUserName(jstring arg0);
		android::net::sip::SipProfile_Builder setAutoRegistration(jboolean arg0);
		android::net::sip::SipProfile_Builder setDisplayName(jstring arg0);
		android::net::sip::SipProfile_Builder setOutboundProxy(jstring arg0);
		android::net::sip::SipProfile_Builder setPassword(jstring arg0);
		android::net::sip::SipProfile_Builder setPort(jint arg0);
		android::net::sip::SipProfile_Builder setProfileName(jstring arg0);
		android::net::sip::SipProfile_Builder setProtocol(jstring arg0);
		android::net::sip::SipProfile_Builder setSendKeepAlive(jboolean arg0);
	};
} // namespace android::net::sip

