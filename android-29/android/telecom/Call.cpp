#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "./Call_Callback.hpp"
#include "./Call_Details.hpp"
#include "./Call_RttCall.hpp"
#include "./InCallService_VideoCall.hpp"
#include "./PhoneAccountHandle.hpp"
#include "./Call.hpp"

namespace android::telecom
{
	// Fields
	jstring Call::AVAILABLE_PHONE_ACCOUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.Call",
			"AVAILABLE_PHONE_ACCOUNTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Call::EXTRA_LAST_EMERGENCY_CALLBACK_TIME_MILLIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.Call",
			"EXTRA_LAST_EMERGENCY_CALLBACK_TIME_MILLIS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Call::EXTRA_SILENT_RINGING_REQUESTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.Call",
			"EXTRA_SILENT_RINGING_REQUESTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Call::EXTRA_SUGGESTED_PHONE_ACCOUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.Call",
			"EXTRA_SUGGESTED_PHONE_ACCOUNTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Call::STATE_ACTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call",
			"STATE_ACTIVE"
		);
	}
	jint Call::STATE_CONNECTING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call",
			"STATE_CONNECTING"
		);
	}
	jint Call::STATE_DIALING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call",
			"STATE_DIALING"
		);
	}
	jint Call::STATE_DISCONNECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call",
			"STATE_DISCONNECTED"
		);
	}
	jint Call::STATE_DISCONNECTING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call",
			"STATE_DISCONNECTING"
		);
	}
	jint Call::STATE_HOLDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call",
			"STATE_HOLDING"
		);
	}
	jint Call::STATE_NEW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call",
			"STATE_NEW"
		);
	}
	jint Call::STATE_PULLING_CALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call",
			"STATE_PULLING_CALL"
		);
	}
	jint Call::STATE_RINGING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call",
			"STATE_RINGING"
		);
	}
	jint Call::STATE_SELECT_PHONE_ACCOUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call",
			"STATE_SELECT_PHONE_ACCOUNT"
		);
	}
	
	Call::Call(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void Call::answer(jint arg0)
	{
		__thiz.callMethod<void>(
			"answer",
			"(I)V",
			arg0
		);
	}
	void Call::conference(android::telecom::Call arg0)
	{
		__thiz.callMethod<void>(
			"conference",
			"(Landroid/telecom/Call;)V",
			arg0.__jniObject().object()
		);
	}
	void Call::deflect(android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"deflect",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void Call::disconnect()
	{
		__thiz.callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	QAndroidJniObject Call::getCannedTextResponses()
	{
		return __thiz.callObjectMethod(
			"getCannedTextResponses",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Call::getChildren()
	{
		return __thiz.callObjectMethod(
			"getChildren",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Call::getConferenceableCalls()
	{
		return __thiz.callObjectMethod(
			"getConferenceableCalls",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Call::getDetails()
	{
		return __thiz.callObjectMethod(
			"getDetails",
			"()Landroid/telecom/Call$Details;"
		);
	}
	QAndroidJniObject Call::getParent()
	{
		return __thiz.callObjectMethod(
			"getParent",
			"()Landroid/telecom/Call;"
		);
	}
	jstring Call::getRemainingPostDialSequence()
	{
		return __thiz.callObjectMethod(
			"getRemainingPostDialSequence",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Call::getRttCall()
	{
		return __thiz.callObjectMethod(
			"getRttCall",
			"()Landroid/telecom/Call$RttCall;"
		);
	}
	jint Call::getState()
	{
		return __thiz.callMethod<jint>(
			"getState",
			"()I"
		);
	}
	QAndroidJniObject Call::getVideoCall()
	{
		return __thiz.callObjectMethod(
			"getVideoCall",
			"()Landroid/telecom/InCallService$VideoCall;"
		);
	}
	void Call::handoverTo(android::telecom::PhoneAccountHandle arg0, jint arg1, android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"handoverTo",
			"(Landroid/telecom/PhoneAccountHandle;ILandroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Call::hold()
	{
		__thiz.callMethod<void>(
			"hold",
			"()V"
		);
	}
	jboolean Call::isRttActive()
	{
		return __thiz.callMethod<jboolean>(
			"isRttActive",
			"()Z"
		);
	}
	void Call::mergeConference()
	{
		__thiz.callMethod<void>(
			"mergeConference",
			"()V"
		);
	}
	void Call::phoneAccountSelected(android::telecom::PhoneAccountHandle arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"phoneAccountSelected",
			"(Landroid/telecom/PhoneAccountHandle;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Call::playDtmfTone(jchar arg0)
	{
		__thiz.callMethod<void>(
			"playDtmfTone",
			"(C)V",
			arg0
		);
	}
	void Call::postDialContinue(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"postDialContinue",
			"(Z)V",
			arg0
		);
	}
	void Call::pullExternalCall()
	{
		__thiz.callMethod<void>(
			"pullExternalCall",
			"()V"
		);
	}
	void Call::putExtras(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"putExtras",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Call::registerCallback(android::telecom::Call_Callback arg0)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/Call$Callback;)V",
			arg0.__jniObject().object()
		);
	}
	void Call::registerCallback(android::telecom::Call_Callback arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/Call$Callback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Call::reject(jboolean arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"reject",
			"(ZLjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void Call::reject(jboolean arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"reject",
			"(ZLjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void Call::removeExtras(jarray arg0)
	{
		__thiz.callMethod<void>(
			"removeExtras",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void Call::removeExtras(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeExtras",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void Call::respondToRttRequest(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"respondToRttRequest",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void Call::sendCallEvent(jstring arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"sendCallEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Call::sendCallEvent(const QString &arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"sendCallEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void Call::sendRttRequest()
	{
		__thiz.callMethod<void>(
			"sendRttRequest",
			"()V"
		);
	}
	void Call::splitFromConference()
	{
		__thiz.callMethod<void>(
			"splitFromConference",
			"()V"
		);
	}
	void Call::stopDtmfTone()
	{
		__thiz.callMethod<void>(
			"stopDtmfTone",
			"()V"
		);
	}
	void Call::stopRtt()
	{
		__thiz.callMethod<void>(
			"stopRtt",
			"()V"
		);
	}
	void Call::swapConference()
	{
		__thiz.callMethod<void>(
			"swapConference",
			"()V"
		);
	}
	jstring Call::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Call::unhold()
	{
		__thiz.callMethod<void>(
			"unhold",
			"()V"
		);
	}
	void Call::unregisterCallback(android::telecom::Call_Callback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterCallback",
			"(Landroid/telecom/Call$Callback;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::telecom

