#include "./SipProfile.hpp"
#include "./SipSession_Listener.hpp"
#include "../../../JString.hpp"
#include "./SipSession.hpp"

namespace android::net::sip
{
	// Fields
	
	// QJniObject forward
	SipSession::SipSession(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void SipSession::answerCall(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"answerCall",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void SipSession::changeCall(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"changeCall",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void SipSession::endCall() const
	{
		callMethod<void>(
			"endCall",
			"()V"
		);
	}
	JString SipSession::getCallId() const
	{
		return callObjectMethod(
			"getCallId",
			"()Ljava/lang/String;"
		);
	}
	JString SipSession::getLocalIp() const
	{
		return callObjectMethod(
			"getLocalIp",
			"()Ljava/lang/String;"
		);
	}
	android::net::sip::SipProfile SipSession::getLocalProfile() const
	{
		return callObjectMethod(
			"getLocalProfile",
			"()Landroid/net/sip/SipProfile;"
		);
	}
	android::net::sip::SipProfile SipSession::getPeerProfile() const
	{
		return callObjectMethod(
			"getPeerProfile",
			"()Landroid/net/sip/SipProfile;"
		);
	}
	jint SipSession::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jboolean SipSession::isInCall() const
	{
		return callMethod<jboolean>(
			"isInCall",
			"()Z"
		);
	}
	void SipSession::makeCall(android::net::sip::SipProfile arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"makeCall",
			"(Landroid/net/sip/SipProfile;Ljava/lang/String;I)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	void SipSession::_register(jint arg0) const
	{
		callMethod<void>(
			"register",
			"(I)V",
			arg0
		);
	}
	void SipSession::setListener(android::net::sip::SipSession_Listener arg0) const
	{
		callMethod<void>(
			"setListener",
			"(Landroid/net/sip/SipSession$Listener;)V",
			arg0.object()
		);
	}
	void SipSession::unregister() const
	{
		callMethod<void>(
			"unregister",
			"()V"
		);
	}
} // namespace android::net::sip

