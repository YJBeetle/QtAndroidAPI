#pragma once

#include "../../../JObject.hpp"

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
	class SipManager : public JObject
	{
	public:
		// Fields
		static jstring EXTRA_CALL_ID();
		static jstring EXTRA_OFFER_SD();
		static jint INCOMING_CALL_RESULT_CODE();
		
		// QJniObject forward
		template<typename ...Ts> explicit SipManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SipManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring getCallId(android::content::Intent arg0);
		static jstring getOfferSessionDescription(android::content::Intent arg0);
		static jboolean isApiSupported(android::content::Context arg0);
		static jboolean isIncomingCallIntent(android::content::Intent arg0);
		static jboolean isSipWifiOnly(android::content::Context arg0);
		static jboolean isVoipSupported(android::content::Context arg0);
		static android::net::sip::SipManager newInstance(android::content::Context arg0);
		void close(jstring arg0);
		android::net::sip::SipSession createSipSession(android::net::sip::SipProfile arg0, android::net::sip::SipSession_Listener arg1);
		android::net::sip::SipSession getSessionFor(android::content::Intent arg0);
		jboolean isOpened(jstring arg0);
		jboolean isRegistered(jstring arg0);
		android::net::sip::SipAudioCall makeAudioCall(android::net::sip::SipProfile arg0, android::net::sip::SipProfile arg1, android::net::sip::SipAudioCall_Listener arg2, jint arg3);
		android::net::sip::SipAudioCall makeAudioCall(jstring arg0, jstring arg1, android::net::sip::SipAudioCall_Listener arg2, jint arg3);
		void open(android::net::sip::SipProfile arg0);
		void open(android::net::sip::SipProfile arg0, android::app::PendingIntent arg1, JObject arg2);
		void _register(android::net::sip::SipProfile arg0, jint arg1, JObject arg2);
		void setRegistrationListener(jstring arg0, JObject arg1);
		android::net::sip::SipAudioCall takeAudioCall(android::content::Intent arg0, android::net::sip::SipAudioCall_Listener arg1);
		void unregister(android::net::sip::SipProfile arg0, JObject arg1);
	};
} // namespace android::net::sip

