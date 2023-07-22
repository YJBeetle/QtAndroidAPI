#pragma once

#include "../../../JObject.hpp"

namespace android::net::sip
{
	class SipAudioCall;
}
namespace android::net::sip
{
	class SipProfile;
}
class JString;

namespace android::net::sip
{
	class SipAudioCall_Listener : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SipAudioCall_Listener(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SipAudioCall_Listener(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		SipAudioCall_Listener();
		
		// Methods
		void onCallBusy(android::net::sip::SipAudioCall arg0) const;
		void onCallEnded(android::net::sip::SipAudioCall arg0) const;
		void onCallEstablished(android::net::sip::SipAudioCall arg0) const;
		void onCallHeld(android::net::sip::SipAudioCall arg0) const;
		void onCalling(android::net::sip::SipAudioCall arg0) const;
		void onChanged(android::net::sip::SipAudioCall arg0) const;
		void onError(android::net::sip::SipAudioCall arg0, jint arg1, JString arg2) const;
		void onReadyToCall(android::net::sip::SipAudioCall arg0) const;
		void onRinging(android::net::sip::SipAudioCall arg0, android::net::sip::SipProfile arg1) const;
		void onRingingBack(android::net::sip::SipAudioCall arg0) const;
	};
} // namespace android::net::sip

