#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
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
namespace android::os
{
	class Message;
}

namespace android::net::sip
{
	class SipAudioCall : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SipAudioCall(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SipAudioCall(QJniObject obj);
		
		// Constructors
		SipAudioCall(android::content::Context arg0, android::net::sip::SipProfile arg1);
		
		// Methods
		void answerCall(jint arg0);
		void attachCall(android::net::sip::SipSession arg0, jstring arg1);
		void close();
		void continueCall(jint arg0);
		void endCall();
		android::net::sip::SipProfile getLocalProfile();
		android::net::sip::SipProfile getPeerProfile();
		jint getState();
		void holdCall(jint arg0);
		jboolean isInCall();
		jboolean isMuted();
		jboolean isOnHold();
		void makeCall(android::net::sip::SipProfile arg0, android::net::sip::SipSession arg1, jint arg2);
		void sendDtmf(jint arg0);
		void sendDtmf(jint arg0, android::os::Message arg1);
		void setListener(android::net::sip::SipAudioCall_Listener arg0);
		void setListener(android::net::sip::SipAudioCall_Listener arg0, jboolean arg1);
		void setSpeakerMode(jboolean arg0);
		void startAudio();
		void toggleMute();
	};
} // namespace android::net::sip

