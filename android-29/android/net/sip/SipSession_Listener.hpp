#pragma once

#ifndef ANDROID_NET_SIP_SIPSESSION_LISTENER
#define ANDROID_NET_SIP_SIPSESSION_LISTENER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::sip
{
	class SipSession;
}
namespace __jni_impl::android::net::sip
{
	class SipProfile;
}

namespace __jni_impl::android::net::sip
{
	class SipSession_Listener : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onError(__jni_impl::android::net::sip::SipSession arg0, jint arg1, jstring arg2);
		void onError(__jni_impl::android::net::sip::SipSession arg0, jint arg1, const QString &arg2);
		void onRingingBack(__jni_impl::android::net::sip::SipSession arg0);
		void onCalling(__jni_impl::android::net::sip::SipSession arg0);
		void onRinging(__jni_impl::android::net::sip::SipSession arg0, __jni_impl::android::net::sip::SipProfile arg1, jstring arg2);
		void onRinging(__jni_impl::android::net::sip::SipSession arg0, __jni_impl::android::net::sip::SipProfile arg1, const QString &arg2);
		void onCallEstablished(__jni_impl::android::net::sip::SipSession arg0, jstring arg1);
		void onCallEstablished(__jni_impl::android::net::sip::SipSession arg0, const QString &arg1);
		void onCallEnded(__jni_impl::android::net::sip::SipSession arg0);
		void onCallBusy(__jni_impl::android::net::sip::SipSession arg0);
		void onCallChangeFailed(__jni_impl::android::net::sip::SipSession arg0, jint arg1, jstring arg2);
		void onCallChangeFailed(__jni_impl::android::net::sip::SipSession arg0, jint arg1, const QString &arg2);
		void onRegistering(__jni_impl::android::net::sip::SipSession arg0);
		void onRegistrationDone(__jni_impl::android::net::sip::SipSession arg0, jint arg1);
		void onRegistrationFailed(__jni_impl::android::net::sip::SipSession arg0, jint arg1, jstring arg2);
		void onRegistrationFailed(__jni_impl::android::net::sip::SipSession arg0, jint arg1, const QString &arg2);
		void onRegistrationTimeout(__jni_impl::android::net::sip::SipSession arg0);
	};
} // namespace __jni_impl::android::net::sip

#include "SipSession.hpp"
#include "SipProfile.hpp"

namespace __jni_impl::android::net::sip
{
	// Fields
	
	// Constructors
	void SipSession_Listener::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.sip.SipSession$Listener",
			"()V"
		);
	}
	
	// Methods
	void SipSession_Listener::onError(__jni_impl::android::net::sip::SipSession arg0, jint arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"onError",
			"(Landroid/net/sip/SipSession;ILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void SipSession_Listener::onError(__jni_impl::android::net::sip::SipSession arg0, jint arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"onError",
			"(Landroid/net/sip/SipSession;ILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void SipSession_Listener::onRingingBack(__jni_impl::android::net::sip::SipSession arg0)
	{
		__thiz.callMethod<void>(
			"onRingingBack",
			"(Landroid/net/sip/SipSession;)V",
			arg0.__jniObject().object()
		);
	}
	void SipSession_Listener::onCalling(__jni_impl::android::net::sip::SipSession arg0)
	{
		__thiz.callMethod<void>(
			"onCalling",
			"(Landroid/net/sip/SipSession;)V",
			arg0.__jniObject().object()
		);
	}
	void SipSession_Listener::onRinging(__jni_impl::android::net::sip::SipSession arg0, __jni_impl::android::net::sip::SipProfile arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"onRinging",
			"(Landroid/net/sip/SipSession;Landroid/net/sip/SipProfile;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void SipSession_Listener::onRinging(__jni_impl::android::net::sip::SipSession arg0, __jni_impl::android::net::sip::SipProfile arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"onRinging",
			"(Landroid/net/sip/SipSession;Landroid/net/sip/SipProfile;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void SipSession_Listener::onCallEstablished(__jni_impl::android::net::sip::SipSession arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onCallEstablished",
			"(Landroid/net/sip/SipSession;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void SipSession_Listener::onCallEstablished(__jni_impl::android::net::sip::SipSession arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"onCallEstablished",
			"(Landroid/net/sip/SipSession;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void SipSession_Listener::onCallEnded(__jni_impl::android::net::sip::SipSession arg0)
	{
		__thiz.callMethod<void>(
			"onCallEnded",
			"(Landroid/net/sip/SipSession;)V",
			arg0.__jniObject().object()
		);
	}
	void SipSession_Listener::onCallBusy(__jni_impl::android::net::sip::SipSession arg0)
	{
		__thiz.callMethod<void>(
			"onCallBusy",
			"(Landroid/net/sip/SipSession;)V",
			arg0.__jniObject().object()
		);
	}
	void SipSession_Listener::onCallChangeFailed(__jni_impl::android::net::sip::SipSession arg0, jint arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"onCallChangeFailed",
			"(Landroid/net/sip/SipSession;ILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void SipSession_Listener::onCallChangeFailed(__jni_impl::android::net::sip::SipSession arg0, jint arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"onCallChangeFailed",
			"(Landroid/net/sip/SipSession;ILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void SipSession_Listener::onRegistering(__jni_impl::android::net::sip::SipSession arg0)
	{
		__thiz.callMethod<void>(
			"onRegistering",
			"(Landroid/net/sip/SipSession;)V",
			arg0.__jniObject().object()
		);
	}
	void SipSession_Listener::onRegistrationDone(__jni_impl::android::net::sip::SipSession arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onRegistrationDone",
			"(Landroid/net/sip/SipSession;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void SipSession_Listener::onRegistrationFailed(__jni_impl::android::net::sip::SipSession arg0, jint arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"onRegistrationFailed",
			"(Landroid/net/sip/SipSession;ILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void SipSession_Listener::onRegistrationFailed(__jni_impl::android::net::sip::SipSession arg0, jint arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"onRegistrationFailed",
			"(Landroid/net/sip/SipSession;ILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void SipSession_Listener::onRegistrationTimeout(__jni_impl::android::net::sip::SipSession arg0)
	{
		__thiz.callMethod<void>(
			"onRegistrationTimeout",
			"(Landroid/net/sip/SipSession;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::net::sip

namespace android::net::sip
{
	class SipSession_Listener : public __jni_impl::android::net::sip::SipSession_Listener
	{
	public:
		SipSession_Listener(QAndroidJniObject obj) { __thiz = obj; }
		SipSession_Listener()
		{
			__constructor();
		}
	};
} // namespace android::net::sip

#endif // ANDROID_NET_SIP_SIPSESSION_LISTENER

