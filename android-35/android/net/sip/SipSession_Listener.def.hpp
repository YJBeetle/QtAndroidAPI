#pragma once

#include "../../../JObject.hpp"

namespace android::net::sip
{
	class SipProfile;
}
namespace android::net::sip
{
	class SipSession;
}
class JString;

namespace android::net::sip
{
	class SipSession_Listener : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SipSession_Listener(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SipSession_Listener(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SipSession_Listener();
		
		// Methods
		void onCallBusy(android::net::sip::SipSession arg0) const;
		void onCallChangeFailed(android::net::sip::SipSession arg0, jint arg1, JString arg2) const;
		void onCallEnded(android::net::sip::SipSession arg0) const;
		void onCallEstablished(android::net::sip::SipSession arg0, JString arg1) const;
		void onCalling(android::net::sip::SipSession arg0) const;
		void onError(android::net::sip::SipSession arg0, jint arg1, JString arg2) const;
		void onRegistering(android::net::sip::SipSession arg0) const;
		void onRegistrationDone(android::net::sip::SipSession arg0, jint arg1) const;
		void onRegistrationFailed(android::net::sip::SipSession arg0, jint arg1, JString arg2) const;
		void onRegistrationTimeout(android::net::sip::SipSession arg0) const;
		void onRinging(android::net::sip::SipSession arg0, android::net::sip::SipProfile arg1, JString arg2) const;
		void onRingingBack(android::net::sip::SipSession arg0) const;
	};
} // namespace android::net::sip

