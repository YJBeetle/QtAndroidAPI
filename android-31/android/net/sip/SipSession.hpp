#pragma once

#include "../../../JObject.hpp"

namespace android::net::sip
{
	class SipProfile;
}
namespace android::net::sip
{
	class SipSession_Listener;
}
class JString;

namespace android::net::sip
{
	class SipSession : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SipSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SipSession(QJniObject obj);
		
		// Constructors
		
		// Methods
		void answerCall(JString arg0, jint arg1);
		void changeCall(JString arg0, jint arg1);
		void endCall();
		JString getCallId();
		JString getLocalIp();
		android::net::sip::SipProfile getLocalProfile();
		android::net::sip::SipProfile getPeerProfile();
		jint getState();
		jboolean isInCall();
		void makeCall(android::net::sip::SipProfile arg0, JString arg1, jint arg2);
		void _register(jint arg0);
		void setListener(android::net::sip::SipSession_Listener arg0);
		void unregister();
	};
} // namespace android::net::sip

