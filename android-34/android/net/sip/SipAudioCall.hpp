#pragma once

#include "../../content/Context.def.hpp"
#include "./SipAudioCall_Listener.def.hpp"
#include "./SipProfile.def.hpp"
#include "./SipSession.def.hpp"
#include "../../os/Message.def.hpp"
#include "../../../JString.hpp"
#include "./SipAudioCall.def.hpp"

namespace android::net::sip
{
	// Fields
	
	// Constructors
	inline SipAudioCall::SipAudioCall(android::content::Context arg0, android::net::sip::SipProfile arg1)
		: JObject(
			"android.net.sip.SipAudioCall",
			"(Landroid/content/Context;Landroid/net/sip/SipProfile;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void SipAudioCall::answerCall(jint arg0) const
	{
		callMethod<void>(
			"answerCall",
			"(I)V",
			arg0
		);
	}
	inline void SipAudioCall::attachCall(android::net::sip::SipSession arg0, JString arg1) const
	{
		callMethod<void>(
			"attachCall",
			"(Landroid/net/sip/SipSession;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void SipAudioCall::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void SipAudioCall::continueCall(jint arg0) const
	{
		callMethod<void>(
			"continueCall",
			"(I)V",
			arg0
		);
	}
	inline void SipAudioCall::endCall() const
	{
		callMethod<void>(
			"endCall",
			"()V"
		);
	}
	inline android::net::sip::SipProfile SipAudioCall::getLocalProfile() const
	{
		return callObjectMethod(
			"getLocalProfile",
			"()Landroid/net/sip/SipProfile;"
		);
	}
	inline android::net::sip::SipProfile SipAudioCall::getPeerProfile() const
	{
		return callObjectMethod(
			"getPeerProfile",
			"()Landroid/net/sip/SipProfile;"
		);
	}
	inline jint SipAudioCall::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	inline void SipAudioCall::holdCall(jint arg0) const
	{
		callMethod<void>(
			"holdCall",
			"(I)V",
			arg0
		);
	}
	inline jboolean SipAudioCall::isInCall() const
	{
		return callMethod<jboolean>(
			"isInCall",
			"()Z"
		);
	}
	inline jboolean SipAudioCall::isMuted() const
	{
		return callMethod<jboolean>(
			"isMuted",
			"()Z"
		);
	}
	inline jboolean SipAudioCall::isOnHold() const
	{
		return callMethod<jboolean>(
			"isOnHold",
			"()Z"
		);
	}
	inline void SipAudioCall::makeCall(android::net::sip::SipProfile arg0, android::net::sip::SipSession arg1, jint arg2) const
	{
		callMethod<void>(
			"makeCall",
			"(Landroid/net/sip/SipProfile;Landroid/net/sip/SipSession;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void SipAudioCall::sendDtmf(jint arg0) const
	{
		callMethod<void>(
			"sendDtmf",
			"(I)V",
			arg0
		);
	}
	inline void SipAudioCall::sendDtmf(jint arg0, android::os::Message arg1) const
	{
		callMethod<void>(
			"sendDtmf",
			"(ILandroid/os/Message;)V",
			arg0,
			arg1.object()
		);
	}
	inline void SipAudioCall::setListener(android::net::sip::SipAudioCall_Listener arg0) const
	{
		callMethod<void>(
			"setListener",
			"(Landroid/net/sip/SipAudioCall$Listener;)V",
			arg0.object()
		);
	}
	inline void SipAudioCall::setListener(android::net::sip::SipAudioCall_Listener arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setListener",
			"(Landroid/net/sip/SipAudioCall$Listener;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void SipAudioCall::setSpeakerMode(jboolean arg0) const
	{
		callMethod<void>(
			"setSpeakerMode",
			"(Z)V",
			arg0
		);
	}
	inline void SipAudioCall::startAudio() const
	{
		callMethod<void>(
			"startAudio",
			"()V"
		);
	}
	inline void SipAudioCall::toggleMute() const
	{
		callMethod<void>(
			"toggleMute",
			"()V"
		);
	}
} // namespace android::net::sip

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::sip;
#endif
