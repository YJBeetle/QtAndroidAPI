#include "./SipProfile.hpp"
#include "./SipSession_Listener.hpp"
#include "./SipSession.hpp"

namespace android::net::sip
{
	// Fields
	
	// QJniObject forward
	SipSession::SipSession(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void SipSession::answerCall(jstring arg0, jint arg1)
	{
		callMethod<void>(
			"answerCall",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void SipSession::changeCall(jstring arg0, jint arg1)
	{
		callMethod<void>(
			"changeCall",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void SipSession::endCall()
	{
		callMethod<void>(
			"endCall",
			"()V"
		);
	}
	jstring SipSession::getCallId()
	{
		return callObjectMethod(
			"getCallId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SipSession::getLocalIp()
	{
		return callObjectMethod(
			"getLocalIp",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::sip::SipProfile SipSession::getLocalProfile()
	{
		return callObjectMethod(
			"getLocalProfile",
			"()Landroid/net/sip/SipProfile;"
		);
	}
	android::net::sip::SipProfile SipSession::getPeerProfile()
	{
		return callObjectMethod(
			"getPeerProfile",
			"()Landroid/net/sip/SipProfile;"
		);
	}
	jint SipSession::getState()
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jboolean SipSession::isInCall()
	{
		return callMethod<jboolean>(
			"isInCall",
			"()Z"
		);
	}
	void SipSession::makeCall(android::net::sip::SipProfile arg0, jstring arg1, jint arg2)
	{
		callMethod<void>(
			"makeCall",
			"(Landroid/net/sip/SipProfile;Ljava/lang/String;I)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void SipSession::_register(jint arg0)
	{
		callMethod<void>(
			"register",
			"(I)V",
			arg0
		);
	}
	void SipSession::setListener(android::net::sip::SipSession_Listener arg0)
	{
		callMethod<void>(
			"setListener",
			"(Landroid/net/sip/SipSession$Listener;)V",
			arg0.object()
		);
	}
	void SipSession::unregister()
	{
		callMethod<void>(
			"unregister",
			"()V"
		);
	}
} // namespace android::net::sip

