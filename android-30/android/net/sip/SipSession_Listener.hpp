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

namespace android::net::sip
{
	class SipSession_Listener : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SipSession_Listener(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SipSession_Listener(QAndroidJniObject obj);
		
		// Constructors
		SipSession_Listener();
		
		// Methods
		void onCallBusy(android::net::sip::SipSession arg0);
		void onCallChangeFailed(android::net::sip::SipSession arg0, jint arg1, jstring arg2);
		void onCallEnded(android::net::sip::SipSession arg0);
		void onCallEstablished(android::net::sip::SipSession arg0, jstring arg1);
		void onCalling(android::net::sip::SipSession arg0);
		void onError(android::net::sip::SipSession arg0, jint arg1, jstring arg2);
		void onRegistering(android::net::sip::SipSession arg0);
		void onRegistrationDone(android::net::sip::SipSession arg0, jint arg1);
		void onRegistrationFailed(android::net::sip::SipSession arg0, jint arg1, jstring arg2);
		void onRegistrationTimeout(android::net::sip::SipSession arg0);
		void onRinging(android::net::sip::SipSession arg0, android::net::sip::SipProfile arg1, jstring arg2);
		void onRingingBack(android::net::sip::SipSession arg0);
	};
} // namespace android::net::sip

