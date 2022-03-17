#pragma once

#include "./SipProfile.def.hpp"
#include "./SipSession_Listener.def.hpp"
#include "../../../JString.hpp"
#include "./SipSession.def.hpp"

namespace android::net::sip
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void SipSession::answerCall(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"answerCall",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void SipSession::changeCall(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"changeCall",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void SipSession::endCall() const
	{
		callMethod<void>(
			"endCall",
			"()V"
		);
	}
	inline JString SipSession::getCallId() const
	{
		return callObjectMethod(
			"getCallId",
			"()Ljava/lang/String;"
		);
	}
	inline JString SipSession::getLocalIp() const
	{
		return callObjectMethod(
			"getLocalIp",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::sip::SipProfile SipSession::getLocalProfile() const
	{
		return callObjectMethod(
			"getLocalProfile",
			"()Landroid/net/sip/SipProfile;"
		);
	}
	inline android::net::sip::SipProfile SipSession::getPeerProfile() const
	{
		return callObjectMethod(
			"getPeerProfile",
			"()Landroid/net/sip/SipProfile;"
		);
	}
	inline jint SipSession::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	inline jboolean SipSession::isInCall() const
	{
		return callMethod<jboolean>(
			"isInCall",
			"()Z"
		);
	}
	inline void SipSession::makeCall(android::net::sip::SipProfile arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"makeCall",
			"(Landroid/net/sip/SipProfile;Ljava/lang/String;I)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void SipSession::register_(jint arg0) const
	{
		callMethod<void>(
			"register",
			"(I)V",
			arg0
		);
	}
	inline void SipSession::setListener(android::net::sip::SipSession_Listener arg0) const
	{
		callMethod<void>(
			"setListener",
			"(Landroid/net/sip/SipSession$Listener;)V",
			arg0.object()
		);
	}
	inline void SipSession::unregister() const
	{
		callMethod<void>(
			"unregister",
			"()V"
		);
	}
} // namespace android::net::sip

// Base class headers

