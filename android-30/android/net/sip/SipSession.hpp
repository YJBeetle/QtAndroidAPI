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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SipSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SipSession(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void answerCall(JString arg0, jint arg1) const;
		void changeCall(JString arg0, jint arg1) const;
		void endCall() const;
		JString getCallId() const;
		JString getLocalIp() const;
		android::net::sip::SipProfile getLocalProfile() const;
		android::net::sip::SipProfile getPeerProfile() const;
		jint getState() const;
		jboolean isInCall() const;
		void makeCall(android::net::sip::SipProfile arg0, JString arg1, jint arg2) const;
		void register_(jint arg0) const;
		void setListener(android::net::sip::SipSession_Listener arg0) const;
		void unregister() const;
	};
} // namespace android::net::sip

