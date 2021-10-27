#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::net::sip
{
	class SipAudioCall_Listener;
}
namespace __jni_impl::android::net::sip
{
	class SipProfile;
}
namespace __jni_impl::android::net::sip
{
	class SipSession;
}
namespace __jni_impl::android::os
{
	class Message;
}

namespace __jni_impl::android::net::sip
{
	class SipAudioCall : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::net::sip::SipProfile arg1);
		
		// Methods
		void answerCall(jint arg0);
		void attachCall(__jni_impl::android::net::sip::SipSession arg0, jstring arg1);
		void attachCall(__jni_impl::android::net::sip::SipSession arg0, const QString &arg1);
		void close();
		void continueCall(jint arg0);
		void endCall();
		QAndroidJniObject getLocalProfile();
		QAndroidJniObject getPeerProfile();
		jint getState();
		void holdCall(jint arg0);
		jboolean isInCall();
		jboolean isMuted();
		jboolean isOnHold();
		void makeCall(__jni_impl::android::net::sip::SipProfile arg0, __jni_impl::android::net::sip::SipSession arg1, jint arg2);
		void sendDtmf(jint arg0);
		void sendDtmf(jint arg0, __jni_impl::android::os::Message arg1);
		void setListener(__jni_impl::android::net::sip::SipAudioCall_Listener arg0);
		void setListener(__jni_impl::android::net::sip::SipAudioCall_Listener arg0, jboolean arg1);
		void setSpeakerMode(jboolean arg0);
		void startAudio();
		void toggleMute();
	};
} // namespace __jni_impl::android::net::sip

#include "../../content/Context.hpp"
#include "./SipAudioCall_Listener.hpp"
#include "./SipProfile.hpp"
#include "./SipSession.hpp"
#include "../../os/Message.hpp"

namespace __jni_impl::android::net::sip
{
	// Fields
	
	// Constructors
	void SipAudioCall::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::net::sip::SipProfile arg1)
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
	void SipAudioCall::attachCall(__jni_impl::android::net::sip::SipSession arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"attachCall",
			"(Landroid/net/sip/SipSession;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void SipAudioCall::attachCall(__jni_impl::android::net::sip::SipSession arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"attachCall",
			"(Landroid/net/sip/SipSession;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
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
	void SipAudioCall::makeCall(__jni_impl::android::net::sip::SipProfile arg0, __jni_impl::android::net::sip::SipSession arg1, jint arg2)
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
	void SipAudioCall::sendDtmf(jint arg0, __jni_impl::android::os::Message arg1)
	{
		__thiz.callMethod<void>(
			"sendDtmf",
			"(ILandroid/os/Message;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void SipAudioCall::setListener(__jni_impl::android::net::sip::SipAudioCall_Listener arg0)
	{
		__thiz.callMethod<void>(
			"setListener",
			"(Landroid/net/sip/SipAudioCall$Listener;)V",
			arg0.__jniObject().object()
		);
	}
	void SipAudioCall::setListener(__jni_impl::android::net::sip::SipAudioCall_Listener arg0, jboolean arg1)
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
} // namespace __jni_impl::android::net::sip

namespace android::net::sip
{
	class SipAudioCall : public __jni_impl::android::net::sip::SipAudioCall
	{
	public:
		SipAudioCall(QAndroidJniObject obj) { __thiz = obj; }
		SipAudioCall(__jni_impl::android::content::Context arg0, __jni_impl::android::net::sip::SipProfile arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::net::sip

