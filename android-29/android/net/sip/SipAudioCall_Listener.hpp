#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::sip
{
	class SipAudioCall;
}
namespace __jni_impl::android::net::sip
{
	class SipProfile;
}

namespace __jni_impl::android::net::sip
{
	class SipAudioCall_Listener : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onCallBusy(__jni_impl::android::net::sip::SipAudioCall arg0);
		void onCallEnded(__jni_impl::android::net::sip::SipAudioCall arg0);
		void onCallEstablished(__jni_impl::android::net::sip::SipAudioCall arg0);
		void onCallHeld(__jni_impl::android::net::sip::SipAudioCall arg0);
		void onCalling(__jni_impl::android::net::sip::SipAudioCall arg0);
		void onChanged(__jni_impl::android::net::sip::SipAudioCall arg0);
		void onError(__jni_impl::android::net::sip::SipAudioCall arg0, jint arg1, jstring arg2);
		void onError(__jni_impl::android::net::sip::SipAudioCall arg0, jint arg1, const QString &arg2);
		void onReadyToCall(__jni_impl::android::net::sip::SipAudioCall arg0);
		void onRinging(__jni_impl::android::net::sip::SipAudioCall arg0, __jni_impl::android::net::sip::SipProfile arg1);
		void onRingingBack(__jni_impl::android::net::sip::SipAudioCall arg0);
	};
} // namespace __jni_impl::android::net::sip

#include "SipAudioCall.hpp"
#include "SipProfile.hpp"

namespace __jni_impl::android::net::sip
{
	// Fields
	
	// Constructors
	void SipAudioCall_Listener::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.sip.SipAudioCall$Listener",
			"()V"
		);
	}
	
	// Methods
	void SipAudioCall_Listener::onCallBusy(__jni_impl::android::net::sip::SipAudioCall arg0)
	{
		__thiz.callMethod<void>(
			"onCallBusy",
			"(Landroid/net/sip/SipAudioCall;)V",
			arg0.__jniObject().object()
		);
	}
	void SipAudioCall_Listener::onCallEnded(__jni_impl::android::net::sip::SipAudioCall arg0)
	{
		__thiz.callMethod<void>(
			"onCallEnded",
			"(Landroid/net/sip/SipAudioCall;)V",
			arg0.__jniObject().object()
		);
	}
	void SipAudioCall_Listener::onCallEstablished(__jni_impl::android::net::sip::SipAudioCall arg0)
	{
		__thiz.callMethod<void>(
			"onCallEstablished",
			"(Landroid/net/sip/SipAudioCall;)V",
			arg0.__jniObject().object()
		);
	}
	void SipAudioCall_Listener::onCallHeld(__jni_impl::android::net::sip::SipAudioCall arg0)
	{
		__thiz.callMethod<void>(
			"onCallHeld",
			"(Landroid/net/sip/SipAudioCall;)V",
			arg0.__jniObject().object()
		);
	}
	void SipAudioCall_Listener::onCalling(__jni_impl::android::net::sip::SipAudioCall arg0)
	{
		__thiz.callMethod<void>(
			"onCalling",
			"(Landroid/net/sip/SipAudioCall;)V",
			arg0.__jniObject().object()
		);
	}
	void SipAudioCall_Listener::onChanged(__jni_impl::android::net::sip::SipAudioCall arg0)
	{
		__thiz.callMethod<void>(
			"onChanged",
			"(Landroid/net/sip/SipAudioCall;)V",
			arg0.__jniObject().object()
		);
	}
	void SipAudioCall_Listener::onError(__jni_impl::android::net::sip::SipAudioCall arg0, jint arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"onError",
			"(Landroid/net/sip/SipAudioCall;ILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void SipAudioCall_Listener::onError(__jni_impl::android::net::sip::SipAudioCall arg0, jint arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"onError",
			"(Landroid/net/sip/SipAudioCall;ILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void SipAudioCall_Listener::onReadyToCall(__jni_impl::android::net::sip::SipAudioCall arg0)
	{
		__thiz.callMethod<void>(
			"onReadyToCall",
			"(Landroid/net/sip/SipAudioCall;)V",
			arg0.__jniObject().object()
		);
	}
	void SipAudioCall_Listener::onRinging(__jni_impl::android::net::sip::SipAudioCall arg0, __jni_impl::android::net::sip::SipProfile arg1)
	{
		__thiz.callMethod<void>(
			"onRinging",
			"(Landroid/net/sip/SipAudioCall;Landroid/net/sip/SipProfile;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void SipAudioCall_Listener::onRingingBack(__jni_impl::android::net::sip::SipAudioCall arg0)
	{
		__thiz.callMethod<void>(
			"onRingingBack",
			"(Landroid/net/sip/SipAudioCall;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::net::sip

namespace android::net::sip
{
	class SipAudioCall_Listener : public __jni_impl::android::net::sip::SipAudioCall_Listener
	{
	public:
		SipAudioCall_Listener(QAndroidJniObject obj) { __thiz = obj; }
		SipAudioCall_Listener()
		{
			__constructor();
		}
	};
} // namespace android::net::sip

