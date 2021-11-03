#pragma once

#include "../../../JObject.hpp"

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
class JString;

namespace android::net::sip
{
	class SipAudioCall : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SipAudioCall(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SipAudioCall(QJniObject obj);
		
		// Constructors
		SipAudioCall(android::content::Context arg0, android::net::sip::SipProfile arg1);
		
		// Methods
		void answerCall(jint arg0) const;
		void attachCall(android::net::sip::SipSession arg0, JString arg1) const;
		void close() const;
		void continueCall(jint arg0) const;
		void endCall() const;
		android::net::sip::SipProfile getLocalProfile() const;
		android::net::sip::SipProfile getPeerProfile() const;
		jint getState() const;
		void holdCall(jint arg0) const;
		jboolean isInCall() const;
		jboolean isMuted() const;
		jboolean isOnHold() const;
		void makeCall(android::net::sip::SipProfile arg0, android::net::sip::SipSession arg1, jint arg2) const;
		void sendDtmf(jint arg0) const;
		void sendDtmf(jint arg0, android::os::Message arg1) const;
		void setListener(android::net::sip::SipAudioCall_Listener arg0) const;
		void setListener(android::net::sip::SipAudioCall_Listener arg0, jboolean arg1) const;
		void setSpeakerMode(jboolean arg0) const;
		void startAudio() const;
		void toggleMute() const;
	};
} // namespace android::net::sip

