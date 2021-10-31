#include "./SipProfile.hpp"
#include "./SipSession.hpp"
#include "./SipSession_Listener.hpp"

namespace android::net::sip
{
	// Fields
	
	SipSession_Listener::SipSession_Listener(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SipSession_Listener::SipSession_Listener()
	{
		__thiz = QAndroidJniObject(
			"android.net.sip.SipSession$Listener",
			"()V"
		);
	}
	
	// Methods
	void SipSession_Listener::onCallBusy(android::net::sip::SipSession arg0)
	{
		__thiz.callMethod<void>(
			"onCallBusy",
			"(Landroid/net/sip/SipSession;)V",
			arg0.__jniObject().object()
		);
	}
	void SipSession_Listener::onCallChangeFailed(android::net::sip::SipSession arg0, jint arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"onCallChangeFailed",
			"(Landroid/net/sip/SipSession;ILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void SipSession_Listener::onCallEnded(android::net::sip::SipSession arg0)
	{
		__thiz.callMethod<void>(
			"onCallEnded",
			"(Landroid/net/sip/SipSession;)V",
			arg0.__jniObject().object()
		);
	}
	void SipSession_Listener::onCallEstablished(android::net::sip::SipSession arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onCallEstablished",
			"(Landroid/net/sip/SipSession;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void SipSession_Listener::onCalling(android::net::sip::SipSession arg0)
	{
		__thiz.callMethod<void>(
			"onCalling",
			"(Landroid/net/sip/SipSession;)V",
			arg0.__jniObject().object()
		);
	}
	void SipSession_Listener::onError(android::net::sip::SipSession arg0, jint arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"onError",
			"(Landroid/net/sip/SipSession;ILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void SipSession_Listener::onRegistering(android::net::sip::SipSession arg0)
	{
		__thiz.callMethod<void>(
			"onRegistering",
			"(Landroid/net/sip/SipSession;)V",
			arg0.__jniObject().object()
		);
	}
	void SipSession_Listener::onRegistrationDone(android::net::sip::SipSession arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onRegistrationDone",
			"(Landroid/net/sip/SipSession;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void SipSession_Listener::onRegistrationFailed(android::net::sip::SipSession arg0, jint arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"onRegistrationFailed",
			"(Landroid/net/sip/SipSession;ILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void SipSession_Listener::onRegistrationTimeout(android::net::sip::SipSession arg0)
	{
		__thiz.callMethod<void>(
			"onRegistrationTimeout",
			"(Landroid/net/sip/SipSession;)V",
			arg0.__jniObject().object()
		);
	}
	void SipSession_Listener::onRinging(android::net::sip::SipSession arg0, android::net::sip::SipProfile arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"onRinging",
			"(Landroid/net/sip/SipSession;Landroid/net/sip/SipProfile;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void SipSession_Listener::onRingingBack(android::net::sip::SipSession arg0)
	{
		__thiz.callMethod<void>(
			"onRingingBack",
			"(Landroid/net/sip/SipSession;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::net::sip

