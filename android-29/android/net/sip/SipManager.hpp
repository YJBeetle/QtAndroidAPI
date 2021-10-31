#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::net::sip
{
	class SipAudioCall;
}
namespace android::net::sip
{
	class SipAudioCall_Listener;
}
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
	class SipSession_Listener;
}

namespace android::net::sip
{
	class SipManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring EXTRA_CALL_ID();
		static jstring EXTRA_OFFER_SD();
		static jint INCOMING_CALL_RESULT_CODE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SipManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SipManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring getCallId(android::content::Intent arg0);
		static jstring getOfferSessionDescription(android::content::Intent arg0);
		static jboolean isApiSupported(android::content::Context arg0);
		static jboolean isIncomingCallIntent(android::content::Intent arg0);
		static jboolean isSipWifiOnly(android::content::Context arg0);
		static jboolean isVoipSupported(android::content::Context arg0);
		static QAndroidJniObject newInstance(android::content::Context arg0);
		void close(jstring arg0);
		QAndroidJniObject createSipSession(android::net::sip::SipProfile arg0, android::net::sip::SipSession_Listener arg1);
		QAndroidJniObject getSessionFor(android::content::Intent arg0);
		jboolean isOpened(jstring arg0);
		jboolean isRegistered(jstring arg0);
		QAndroidJniObject makeAudioCall(android::net::sip::SipProfile arg0, android::net::sip::SipProfile arg1, android::net::sip::SipAudioCall_Listener arg2, jint arg3);
		QAndroidJniObject makeAudioCall(jstring arg0, jstring arg1, android::net::sip::SipAudioCall_Listener arg2, jint arg3);
		void open(android::net::sip::SipProfile arg0);
		void open(android::net::sip::SipProfile arg0, android::app::PendingIntent arg1, __JniBaseClass arg2);
		void _register(android::net::sip::SipProfile arg0, jint arg1, __JniBaseClass arg2);
		void setRegistrationListener(jstring arg0, __JniBaseClass arg1);
		QAndroidJniObject takeAudioCall(android::content::Intent arg0, android::net::sip::SipAudioCall_Listener arg1);
		void unregister(android::net::sip::SipProfile arg0, __JniBaseClass arg1);
	};
} // namespace android::net::sip

