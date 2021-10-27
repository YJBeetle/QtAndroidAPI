#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class SipSession_Listener : public __JniBaseClass
	{
	public:
		// Fields
		
		SipSession_Listener(QAndroidJniObject obj);
		// Constructors
		SipSession_Listener();
		
		// Methods
		void onCallBusy(android::net::sip::SipSession arg0);
		void onCallChangeFailed(android::net::sip::SipSession arg0, jint arg1, jstring arg2);
		void onCallChangeFailed(android::net::sip::SipSession arg0, jint arg1, const QString &arg2);
		void onCallEnded(android::net::sip::SipSession arg0);
		void onCallEstablished(android::net::sip::SipSession arg0, jstring arg1);
		void onCallEstablished(android::net::sip::SipSession arg0, const QString &arg1);
		void onCalling(android::net::sip::SipSession arg0);
		void onError(android::net::sip::SipSession arg0, jint arg1, jstring arg2);
		void onError(android::net::sip::SipSession arg0, jint arg1, const QString &arg2);
		void onRegistering(android::net::sip::SipSession arg0);
		void onRegistrationDone(android::net::sip::SipSession arg0, jint arg1);
		void onRegistrationFailed(android::net::sip::SipSession arg0, jint arg1, jstring arg2);
		void onRegistrationFailed(android::net::sip::SipSession arg0, jint arg1, const QString &arg2);
		void onRegistrationTimeout(android::net::sip::SipSession arg0);
		void onRinging(android::net::sip::SipSession arg0, android::net::sip::SipProfile arg1, jstring arg2);
		void onRinging(android::net::sip::SipSession arg0, android::net::sip::SipProfile arg1, const QString &arg2);
		void onRingingBack(android::net::sip::SipSession arg0);
	};
} // namespace android::net::sip

