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
class JString;

namespace android::net::sip
{
	class SipManager : public JObject
	{
	public:
		// Fields
		static JString EXTRA_CALL_ID();
		static JString EXTRA_OFFER_SD();
		static jint INCOMING_CALL_RESULT_CODE();
		
		// QJniObject forward
		template<typename ...Ts> explicit SipManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SipManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JString getCallId(android::content::Intent arg0);
		static JString getOfferSessionDescription(android::content::Intent arg0);
		static jboolean isApiSupported(android::content::Context arg0);
		static jboolean isIncomingCallIntent(android::content::Intent arg0);
		static jboolean isSipWifiOnly(android::content::Context arg0);
		static jboolean isVoipSupported(android::content::Context arg0);
		static android::net::sip::SipManager newInstance(android::content::Context arg0);
		void close(JString arg0) const;
		android::net::sip::SipSession createSipSession(android::net::sip::SipProfile arg0, android::net::sip::SipSession_Listener arg1) const;
		android::net::sip::SipSession getSessionFor(android::content::Intent arg0) const;
		jboolean isOpened(JString arg0) const;
		jboolean isRegistered(JString arg0) const;
		android::net::sip::SipAudioCall makeAudioCall(android::net::sip::SipProfile arg0, android::net::sip::SipProfile arg1, android::net::sip::SipAudioCall_Listener arg2, jint arg3) const;
		android::net::sip::SipAudioCall makeAudioCall(JString arg0, JString arg1, android::net::sip::SipAudioCall_Listener arg2, jint arg3) const;
		void open(android::net::sip::SipProfile arg0) const;
		void open(android::net::sip::SipProfile arg0, android::app::PendingIntent arg1, JObject arg2) const;
		void register_(android::net::sip::SipProfile arg0, jint arg1, JObject arg2) const;
		void setRegistrationListener(JString arg0, JObject arg1) const;
		android::net::sip::SipAudioCall takeAudioCall(android::content::Intent arg0, android::net::sip::SipAudioCall_Listener arg1) const;
		void unregister(android::net::sip::SipProfile arg0, JObject arg1) const;
	};
} // namespace android::net::sip

