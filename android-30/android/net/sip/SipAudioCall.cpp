#include "../../content/Context.hpp"
#include "./SipAudioCall_Listener.hpp"
#include "./SipProfile.hpp"
#include "./SipSession.hpp"
#include "../../os/Message.hpp"
#include "../../../JString.hpp"
#include "./SipAudioCall.hpp"

namespace android::net::sip
{
	// Fields
	
	// QAndroidJniObject forward
	SipAudioCall::SipAudioCall(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SipAudioCall::SipAudioCall(android::content::Context arg0, android::net::sip::SipProfile arg1)
		: JObject(
			"android.net.sip.SipAudioCall",
			"(Landroid/content/Context;Landroid/net/sip/SipProfile;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void SipAudioCall::answerCall(jint arg0) const
	{
		callMethod<void>(
			"answerCall",
			"(I)V",
			arg0
		);
	}
	void SipAudioCall::attachCall(android::net::sip::SipSession arg0, JString arg1) const
	{
		callMethod<void>(
			"attachCall",
			"(Landroid/net/sip/SipSession;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void SipAudioCall::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void SipAudioCall::continueCall(jint arg0) const
	{
		callMethod<void>(
			"continueCall",
			"(I)V",
			arg0
		);
	}
	void SipAudioCall::endCall() const
	{
		callMethod<void>(
			"endCall",
			"()V"
		);
	}
	android::net::sip::SipProfile SipAudioCall::getLocalProfile() const
	{
		return callObjectMethod(
			"getLocalProfile",
			"()Landroid/net/sip/SipProfile;"
		);
	}
	android::net::sip::SipProfile SipAudioCall::getPeerProfile() const
	{
		return callObjectMethod(
			"getPeerProfile",
			"()Landroid/net/sip/SipProfile;"
		);
	}
	jint SipAudioCall::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	void SipAudioCall::holdCall(jint arg0) const
	{
		callMethod<void>(
			"holdCall",
			"(I)V",
			arg0
		);
	}
	jboolean SipAudioCall::isInCall() const
	{
		return callMethod<jboolean>(
			"isInCall",
			"()Z"
		);
	}
	jboolean SipAudioCall::isMuted() const
	{
		return callMethod<jboolean>(
			"isMuted",
			"()Z"
		);
	}
	jboolean SipAudioCall::isOnHold() const
	{
		return callMethod<jboolean>(
			"isOnHold",
			"()Z"
		);
	}
	void SipAudioCall::makeCall(android::net::sip::SipProfile arg0, android::net::sip::SipSession arg1, jint arg2) const
	{
		callMethod<void>(
			"makeCall",
			"(Landroid/net/sip/SipProfile;Landroid/net/sip/SipSession;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void SipAudioCall::sendDtmf(jint arg0) const
	{
		callMethod<void>(
			"sendDtmf",
			"(I)V",
			arg0
		);
	}
	void SipAudioCall::sendDtmf(jint arg0, android::os::Message arg1) const
	{
		callMethod<void>(
			"sendDtmf",
			"(ILandroid/os/Message;)V",
			arg0,
			arg1.object()
		);
	}
	void SipAudioCall::setListener(android::net::sip::SipAudioCall_Listener arg0) const
	{
		callMethod<void>(
			"setListener",
			"(Landroid/net/sip/SipAudioCall$Listener;)V",
			arg0.object()
		);
	}
	void SipAudioCall::setListener(android::net::sip::SipAudioCall_Listener arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setListener",
			"(Landroid/net/sip/SipAudioCall$Listener;Z)V",
			arg0.object(),
			arg1
		);
	}
	void SipAudioCall::setSpeakerMode(jboolean arg0) const
	{
		callMethod<void>(
			"setSpeakerMode",
			"(Z)V",
			arg0
		);
	}
	void SipAudioCall::startAudio() const
	{
		callMethod<void>(
			"startAudio",
			"()V"
		);
	}
	void SipAudioCall::toggleMute() const
	{
		callMethod<void>(
			"toggleMute",
			"()V"
		);
	}
} // namespace android::net::sip

