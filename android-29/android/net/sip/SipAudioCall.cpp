#include "../../content/Context.hpp"
#include "./SipAudioCall_Listener.hpp"
#include "./SipProfile.hpp"
#include "./SipSession.hpp"
#include "../../os/Message.hpp"
#include "./SipAudioCall.hpp"

namespace android::net::sip
{
	// Fields
	
	SipAudioCall::SipAudioCall(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SipAudioCall::SipAudioCall(android::content::Context arg0, android::net::sip::SipProfile arg1)
	{
		__thiz = QAndroidJniObject(
			"android.net.sip.SipAudioCall",
			"(Landroid/content/Context;Landroid/net/sip/SipProfile;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void SipAudioCall::answerCall(jint arg0)
	{
		__thiz.callMethod<void>(
			"answerCall",
			"(I)V",
			arg0
		);
	}
	void SipAudioCall::attachCall(android::net::sip::SipSession arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"attachCall",
			"(Landroid/net/sip/SipSession;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void SipAudioCall::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void SipAudioCall::continueCall(jint arg0)
	{
		__thiz.callMethod<void>(
			"continueCall",
			"(I)V",
			arg0
		);
	}
	void SipAudioCall::endCall()
	{
		__thiz.callMethod<void>(
			"endCall",
			"()V"
		);
	}
	QAndroidJniObject SipAudioCall::getLocalProfile()
	{
		return __thiz.callObjectMethod(
			"getLocalProfile",
			"()Landroid/net/sip/SipProfile;"
		);
	}
	QAndroidJniObject SipAudioCall::getPeerProfile()
	{
		return __thiz.callObjectMethod(
			"getPeerProfile",
			"()Landroid/net/sip/SipProfile;"
		);
	}
	jint SipAudioCall::getState()
	{
		return __thiz.callMethod<jint>(
			"getState",
			"()I"
		);
	}
	void SipAudioCall::holdCall(jint arg0)
	{
		__thiz.callMethod<void>(
			"holdCall",
			"(I)V",
			arg0
		);
	}
	jboolean SipAudioCall::isInCall()
	{
		return __thiz.callMethod<jboolean>(
			"isInCall",
			"()Z"
		);
	}
	jboolean SipAudioCall::isMuted()
	{
		return __thiz.callMethod<jboolean>(
			"isMuted",
			"()Z"
		);
	}
	jboolean SipAudioCall::isOnHold()
	{
		return __thiz.callMethod<jboolean>(
			"isOnHold",
			"()Z"
		);
	}
	void SipAudioCall::makeCall(android::net::sip::SipProfile arg0, android::net::sip::SipSession arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"makeCall",
			"(Landroid/net/sip/SipProfile;Landroid/net/sip/SipSession;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void SipAudioCall::sendDtmf(jint arg0)
	{
		__thiz.callMethod<void>(
			"sendDtmf",
			"(I)V",
			arg0
		);
	}
	void SipAudioCall::sendDtmf(jint arg0, android::os::Message arg1)
	{
		__thiz.callMethod<void>(
			"sendDtmf",
			"(ILandroid/os/Message;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void SipAudioCall::setListener(android::net::sip::SipAudioCall_Listener arg0)
	{
		__thiz.callMethod<void>(
			"setListener",
			"(Landroid/net/sip/SipAudioCall$Listener;)V",
			arg0.__jniObject().object()
		);
	}
	void SipAudioCall::setListener(android::net::sip::SipAudioCall_Listener arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setListener",
			"(Landroid/net/sip/SipAudioCall$Listener;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void SipAudioCall::setSpeakerMode(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSpeakerMode",
			"(Z)V",
			arg0
		);
	}
	void SipAudioCall::startAudio()
	{
		__thiz.callMethod<void>(
			"startAudio",
			"()V"
		);
	}
	void SipAudioCall::toggleMute()
	{
		__thiz.callMethod<void>(
			"toggleMute",
			"()V"
		);
	}
} // namespace android::net::sip

