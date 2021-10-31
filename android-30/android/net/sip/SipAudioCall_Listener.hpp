#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net::sip
{
	class SipAudioCall;
}
namespace android::net::sip
{
	class SipProfile;
}

namespace android::net::sip
{
	class SipAudioCall_Listener : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SipAudioCall_Listener(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SipAudioCall_Listener(QAndroidJniObject obj);
		
		// Constructors
		SipAudioCall_Listener();
		
		// Methods
		void onCallBusy(android::net::sip::SipAudioCall arg0);
		void onCallEnded(android::net::sip::SipAudioCall arg0);
		void onCallEstablished(android::net::sip::SipAudioCall arg0);
		void onCallHeld(android::net::sip::SipAudioCall arg0);
		void onCalling(android::net::sip::SipAudioCall arg0);
		void onChanged(android::net::sip::SipAudioCall arg0);
		void onError(android::net::sip::SipAudioCall arg0, jint arg1, jstring arg2);
		void onReadyToCall(android::net::sip::SipAudioCall arg0);
		void onRinging(android::net::sip::SipAudioCall arg0, android::net::sip::SipProfile arg1);
		void onRingingBack(android::net::sip::SipAudioCall arg0);
	};
} // namespace android::net::sip

