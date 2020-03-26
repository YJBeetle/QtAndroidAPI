#pragma once

#ifndef ANDROID_NET_SIP_SIPSESSION
#define ANDROID_NET_SIP_SIPSESSION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::sip
{
	class SipProfile;
}
namespace __jni_impl::android::net::sip
{
	class SipSession_Listener;
}

namespace __jni_impl::android::net::sip
{
	class SipSession : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void _register(jint arg0);
		jint getState();
		void unregister();
		jboolean isInCall();
		void endCall();
		QAndroidJniObject getLocalProfile();
		jstring getLocalIp();
		QAndroidJniObject getPeerProfile();
		jstring getCallId();
		void setListener(__jni_impl::android::net::sip::SipSession_Listener arg0);
		void makeCall(__jni_impl::android::net::sip::SipProfile arg0, jstring arg1, jint arg2);
		void answerCall(jstring arg0, jint arg1);
		void changeCall(jstring arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::sip

#include "SipProfile.hpp"
#include "SipSession_Listener.hpp"

namespace __jni_impl::android::net::sip
{
	// Fields
	
	// Constructors
	void SipSession::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.sip.SipSession",
			"(V)V");
	}
	
	// Methods
	void SipSession::_register(jint arg0)
	{
		__thiz.callMethod<void>(
			"register",
			"(I)V",
			arg0
		);
	}
	jint SipSession::getState()
	{
		return __thiz.callMethod<jint>(
			"getState",
			"()I"
		);
	}
	void SipSession::unregister()
	{
		__thiz.callMethod<void>(
			"unregister",
			"()V"
		);
	}
	jboolean SipSession::isInCall()
	{
		return __thiz.callMethod<jboolean>(
			"isInCall",
			"()Z"
		);
	}
	void SipSession::endCall()
	{
		__thiz.callMethod<void>(
			"endCall",
			"()V"
		);
	}
	QAndroidJniObject SipSession::getLocalProfile()
	{
		return __thiz.callObjectMethod(
			"getLocalProfile",
			"()Landroid/net/sip/SipProfile;"
		);
	}
	jstring SipSession::getLocalIp()
	{
		return __thiz.callObjectMethod(
			"getLocalIp",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SipSession::getPeerProfile()
	{
		return __thiz.callObjectMethod(
			"getPeerProfile",
			"()Landroid/net/sip/SipProfile;"
		);
	}
	jstring SipSession::getCallId()
	{
		return __thiz.callObjectMethod(
			"getCallId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SipSession::setListener(__jni_impl::android::net::sip::SipSession_Listener arg0)
	{
		__thiz.callMethod<void>(
			"setListener",
			"(Landroid/net/sip/SipSession$Listener;)V",
			arg0.__jniObject().object()
		);
	}
	void SipSession::makeCall(__jni_impl::android::net::sip::SipProfile arg0, jstring arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"makeCall",
			"(Landroid/net/sip/SipProfile;Ljava/lang/String;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void SipSession::answerCall(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"answerCall",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void SipSession::changeCall(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"changeCall",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::net::sip

namespace android::net::sip
{
	class SipSession : public __jni_impl::android::net::sip::SipSession
	{
	public:
		SipSession(QAndroidJniObject obj) { __thiz = obj; }
		SipSession()
		{
			__constructor();
		}
	};
} // namespace android::net::sip

#endif // ANDROID_NET_SIP_SIPSESSION

