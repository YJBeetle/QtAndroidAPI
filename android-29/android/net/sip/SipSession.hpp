#pragma once

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
		void answerCall(jstring arg0, jint arg1);
		void answerCall(const QString &arg0, jint arg1);
		void changeCall(jstring arg0, jint arg1);
		void changeCall(const QString &arg0, jint arg1);
		void endCall();
		jstring getCallId();
		jstring getLocalIp();
		QAndroidJniObject getLocalProfile();
		QAndroidJniObject getPeerProfile();
		jint getState();
		jboolean isInCall();
		void makeCall(__jni_impl::android::net::sip::SipProfile arg0, jstring arg1, jint arg2);
		void makeCall(__jni_impl::android::net::sip::SipProfile arg0, const QString &arg1, jint arg2);
		void _register(jint arg0);
		void setListener(__jni_impl::android::net::sip::SipSession_Listener arg0);
		void unregister();
	};
} // namespace __jni_impl::android::net::sip

#include "./SipProfile.hpp"
#include "./SipSession_Listener.hpp"

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
	void SipSession::answerCall(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"answerCall",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void SipSession::answerCall(const QString &arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"answerCall",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
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
	void SipSession::changeCall(const QString &arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"changeCall",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void SipSession::endCall()
	{
		__thiz.callMethod<void>(
			"endCall",
			"()V"
		);
	}
	jstring SipSession::getCallId()
	{
		return __thiz.callObjectMethod(
			"getCallId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SipSession::getLocalIp()
	{
		return __thiz.callObjectMethod(
			"getLocalIp",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SipSession::getLocalProfile()
	{
		return __thiz.callObjectMethod(
			"getLocalProfile",
			"()Landroid/net/sip/SipProfile;"
		);
	}
	QAndroidJniObject SipSession::getPeerProfile()
	{
		return __thiz.callObjectMethod(
			"getPeerProfile",
			"()Landroid/net/sip/SipProfile;"
		);
	}
	jint SipSession::getState()
	{
		return __thiz.callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jboolean SipSession::isInCall()
	{
		return __thiz.callMethod<jboolean>(
			"isInCall",
			"()Z"
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
	void SipSession::makeCall(__jni_impl::android::net::sip::SipProfile arg0, const QString &arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"makeCall",
			"(Landroid/net/sip/SipProfile;Ljava/lang/String;I)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void SipSession::_register(jint arg0)
	{
		__thiz.callMethod<void>(
			"register",
			"(I)V",
			arg0
		);
	}
	void SipSession::setListener(__jni_impl::android::net::sip::SipSession_Listener arg0)
	{
		__thiz.callMethod<void>(
			"setListener",
			"(Landroid/net/sip/SipSession$Listener;)V",
			arg0.__jniObject().object()
		);
	}
	void SipSession::unregister()
	{
		__thiz.callMethod<void>(
			"unregister",
			"()V"
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

