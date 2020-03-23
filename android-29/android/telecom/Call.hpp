#pragma once

#ifndef ANDROID_TELECOM_CALL
#define ANDROID_TELECOM_CALL

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::telecom
{
	class PhoneAccountHandle;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::telecom
{
	class InCallService_VideoCall;
}
namespace __jni_impl::android::telecom
{
	class Call_Details;
}
namespace __jni_impl::android::telecom
{
	class Call_RttCall;
}
namespace __jni_impl::android::telecom
{
	class Call_Callback;
}
namespace __jni_impl::android::os
{
	class Handler;
}

namespace __jni_impl::android::telecom
{
	class Call : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject AVAILABLE_PHONE_ACCOUNTS();
		static QAndroidJniObject EXTRA_LAST_EMERGENCY_CALLBACK_TIME_MILLIS();
		static QAndroidJniObject EXTRA_SILENT_RINGING_REQUESTED();
		static QAndroidJniObject EXTRA_SUGGESTED_PHONE_ACCOUNTS();
		static jint STATE_ACTIVE();
		static jint STATE_CONNECTING();
		static jint STATE_DIALING();
		static jint STATE_DISCONNECTED();
		static jint STATE_DISCONNECTING();
		static jint STATE_HOLDING();
		static jint STATE_NEW();
		static jint STATE_PULLING_CALL();
		static jint STATE_RINGING();
		static jint STATE_SELECT_PHONE_ACCOUNT();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject getParent();
		jint getState();
		void answer(jint arg0);
		QAndroidJniObject getChildren();
		void removeExtras(__jni_impl::__JniBaseClass arg0);
		void removeExtras(jarray arg0);
		QAndroidJniObject getRemainingPostDialSequence();
		void deflect(__jni_impl::android::net::Uri arg0);
		void phoneAccountSelected(__jni_impl::android::telecom::PhoneAccountHandle arg0, jboolean arg1);
		void splitFromConference();
		void mergeConference();
		void swapConference();
		void sendCallEvent(jstring arg0, __jni_impl::android::os::Bundle arg1);
		void sendRttRequest();
		void respondToRttRequest(jint arg0, jboolean arg1);
		void handoverTo(__jni_impl::android::telecom::PhoneAccountHandle arg0, jint arg1, __jni_impl::android::os::Bundle arg2);
		void stopRtt();
		QAndroidJniObject getConferenceableCalls();
		QAndroidJniObject getCannedTextResponses();
		QAndroidJniObject getVideoCall();
		QAndroidJniObject getDetails();
		QAndroidJniObject getRttCall();
		jboolean isRttActive();
		void putExtras(__jni_impl::android::os::Bundle arg0);
		void conference(__jni_impl::android::telecom::Call arg0);
		void registerCallback(__jni_impl::android::telecom::Call_Callback arg0, __jni_impl::android::os::Handler arg1);
		void registerCallback(__jni_impl::android::telecom::Call_Callback arg0);
		void unregisterCallback(__jni_impl::android::telecom::Call_Callback arg0);
		void reject(jboolean arg0, jstring arg1);
		void hold();
		void unhold();
		void disconnect();
		void playDtmfTone(jchar arg0);
		void stopDtmfTone();
		void postDialContinue(jboolean arg0);
		void pullExternalCall();
	};
} // namespace __jni_impl::android::telecom

#include "../net/Uri.hpp"
#include "PhoneAccountHandle.hpp"
#include "../os/Bundle.hpp"
#include "InCallService_VideoCall.hpp"
#include "Call_Details.hpp"
#include "Call_RttCall.hpp"
#include "Call_Callback.hpp"
#include "../os/Handler.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	QAndroidJniObject Call::AVAILABLE_PHONE_ACCOUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.Call",
			"AVAILABLE_PHONE_ACCOUNTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Call::EXTRA_LAST_EMERGENCY_CALLBACK_TIME_MILLIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.Call",
			"EXTRA_LAST_EMERGENCY_CALLBACK_TIME_MILLIS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Call::EXTRA_SILENT_RINGING_REQUESTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.Call",
			"EXTRA_SILENT_RINGING_REQUESTED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Call::EXTRA_SUGGESTED_PHONE_ACCOUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.Call",
			"EXTRA_SUGGESTED_PHONE_ACCOUNTS",
			"Ljava/lang/String;");
	}
	jint Call::STATE_ACTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call",
			"STATE_ACTIVE");
	}
	jint Call::STATE_CONNECTING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call",
			"STATE_CONNECTING");
	}
	jint Call::STATE_DIALING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call",
			"STATE_DIALING");
	}
	jint Call::STATE_DISCONNECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call",
			"STATE_DISCONNECTED");
	}
	jint Call::STATE_DISCONNECTING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call",
			"STATE_DISCONNECTING");
	}
	jint Call::STATE_HOLDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call",
			"STATE_HOLDING");
	}
	jint Call::STATE_NEW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call",
			"STATE_NEW");
	}
	jint Call::STATE_PULLING_CALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call",
			"STATE_PULLING_CALL");
	}
	jint Call::STATE_RINGING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call",
			"STATE_RINGING");
	}
	jint Call::STATE_SELECT_PHONE_ACCOUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call",
			"STATE_SELECT_PHONE_ACCOUNT");
	}
	
	// Constructors
	void Call::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.Call",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Call::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Call::getParent()
	{
		return __thiz.callObjectMethod(
			"getParent",
			"()Landroid/telecom/Call;");
	}
	jint Call::getState()
	{
		return __thiz.callMethod<jint>(
			"getState",
			"()I");
	}
	void Call::answer(jint arg0)
	{
		__thiz.callMethod<void>(
			"answer",
			"(I)V",
			arg0);
	}
	QAndroidJniObject Call::getChildren()
	{
		return __thiz.callObjectMethod(
			"getChildren",
			"()Ljava/util/List;");
	}
	void Call::removeExtras(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeExtras",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object());
	}
	void Call::removeExtras(jarray arg0)
	{
		__thiz.callMethod<void>(
			"removeExtras",
			"([Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject Call::getRemainingPostDialSequence()
	{
		return __thiz.callObjectMethod(
			"getRemainingPostDialSequence",
			"()Ljava/lang/String;");
	}
	void Call::deflect(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"deflect",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object());
	}
	void Call::phoneAccountSelected(__jni_impl::android::telecom::PhoneAccountHandle arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"phoneAccountSelected",
			"(Landroid/telecom/PhoneAccountHandle;Z)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void Call::splitFromConference()
	{
		__thiz.callMethod<void>(
			"splitFromConference",
			"()V");
	}
	void Call::mergeConference()
	{
		__thiz.callMethod<void>(
			"mergeConference",
			"()V");
	}
	void Call::swapConference()
	{
		__thiz.callMethod<void>(
			"swapConference",
			"()V");
	}
	void Call::sendCallEvent(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"sendCallEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void Call::sendRttRequest()
	{
		__thiz.callMethod<void>(
			"sendRttRequest",
			"()V");
	}
	void Call::respondToRttRequest(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"respondToRttRequest",
			"(IZ)V",
			arg0,
			arg1);
	}
	void Call::handoverTo(__jni_impl::android::telecom::PhoneAccountHandle arg0, jint arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"handoverTo",
			"(Landroid/telecom/PhoneAccountHandle;ILandroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	void Call::stopRtt()
	{
		__thiz.callMethod<void>(
			"stopRtt",
			"()V");
	}
	QAndroidJniObject Call::getConferenceableCalls()
	{
		return __thiz.callObjectMethod(
			"getConferenceableCalls",
			"()Ljava/util/List;");
	}
	QAndroidJniObject Call::getCannedTextResponses()
	{
		return __thiz.callObjectMethod(
			"getCannedTextResponses",
			"()Ljava/util/List;");
	}
	QAndroidJniObject Call::getVideoCall()
	{
		return __thiz.callObjectMethod(
			"getVideoCall",
			"()Landroid/telecom/InCallService$VideoCall;");
	}
	QAndroidJniObject Call::getDetails()
	{
		return __thiz.callObjectMethod(
			"getDetails",
			"()Landroid/telecom/Call$Details;");
	}
	QAndroidJniObject Call::getRttCall()
	{
		return __thiz.callObjectMethod(
			"getRttCall",
			"()Landroid/telecom/Call$RttCall;");
	}
	jboolean Call::isRttActive()
	{
		return __thiz.callMethod<jboolean>(
			"isRttActive",
			"()Z");
	}
	void Call::putExtras(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"putExtras",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object());
	}
	void Call::conference(__jni_impl::android::telecom::Call arg0)
	{
		__thiz.callMethod<void>(
			"conference",
			"(Landroid/telecom/Call;)V",
			arg0.__jniObject().object());
	}
	void Call::registerCallback(__jni_impl::android::telecom::Call_Callback arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/Call$Callback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Call::registerCallback(__jni_impl::android::telecom::Call_Callback arg0)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/Call$Callback;)V",
			arg0.__jniObject().object());
	}
	void Call::unregisterCallback(__jni_impl::android::telecom::Call_Callback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterCallback",
			"(Landroid/telecom/Call$Callback;)V",
			arg0.__jniObject().object());
	}
	void Call::reject(jboolean arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"reject",
			"(ZLjava/lang/String;)V",
			arg0,
			arg1);
	}
	void Call::hold()
	{
		__thiz.callMethod<void>(
			"hold",
			"()V");
	}
	void Call::unhold()
	{
		__thiz.callMethod<void>(
			"unhold",
			"()V");
	}
	void Call::disconnect()
	{
		__thiz.callMethod<void>(
			"disconnect",
			"()V");
	}
	void Call::playDtmfTone(jchar arg0)
	{
		__thiz.callMethod<void>(
			"playDtmfTone",
			"(C)V",
			arg0);
	}
	void Call::stopDtmfTone()
	{
		__thiz.callMethod<void>(
			"stopDtmfTone",
			"()V");
	}
	void Call::postDialContinue(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"postDialContinue",
			"(Z)V",
			arg0);
	}
	void Call::pullExternalCall()
	{
		__thiz.callMethod<void>(
			"pullExternalCall",
			"()V");
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class Call : public __jni_impl::android::telecom::Call
	{
	public:
		Call(QAndroidJniObject obj) { __thiz = obj; }
		Call()
		{
			__constructor();
		}
	};
} // namespace android::telecom

#endif // ANDROID_TELECOM_CALL

