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
	
	// QAndroidJniObject forward
	Call::Call(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void Call::answer(jint arg0)
	{
		callMethod<void>(
			"answer",
			"(I)V",
			arg0
		);
	}
	void Call::conference(android::telecom::Call arg0)
	{
		callMethod<void>(
			"conference",
			"(Landroid/telecom/Call;)V",
			arg0.object()
		);
	}
	void Call::deflect(android::net::Uri arg0)
	{
		callMethod<void>(
			"deflect",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void Call::disconnect()
	{
		callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	QAndroidJniObject Call::getCannedTextResponses()
	{
		return callObjectMethod(
			"getCannedTextResponses",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Call::getChildren()
	{
		return callObjectMethod(
			"getChildren",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Call::getConferenceableCalls()
	{
		return callObjectMethod(
			"getConferenceableCalls",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Call::getDetails()
	{
		return callObjectMethod(
			"getDetails",
			"()Landroid/telecom/Call$Details;"
		);
	}
	QAndroidJniObject Call::getParent()
	{
		return callObjectMethod(
			"getParent",
			"()Landroid/telecom/Call;"
		);
	}
	jstring Call::getRemainingPostDialSequence()
	{
		return callObjectMethod(
			"getRemainingPostDialSequence",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Call::getRttCall()
	{
		return callObjectMethod(
			"getRttCall",
			"()Landroid/telecom/Call$RttCall;"
		);
	}
	jint Call::getState()
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	QAndroidJniObject Call::getVideoCall()
	{
		return callObjectMethod(
			"getVideoCall",
			"()Landroid/telecom/InCallService$VideoCall;"
		);
	}
	void Call::handoverTo(android::telecom::PhoneAccountHandle arg0, jint arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"handoverTo",
			"(Landroid/telecom/PhoneAccountHandle;ILandroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void Call::hold()
	{
		callMethod<void>(
			"hold",
			"()V"
		);
	}
	jboolean Call::isRttActive()
	{
		return callMethod<jboolean>(
			"isRttActive",
			"()Z"
		);
	}
	void Call::mergeConference()
	{
		callMethod<void>(
			"mergeConference",
			"()V"
		);
	}
	void Call::phoneAccountSelected(android::telecom::PhoneAccountHandle arg0, jboolean arg1)
	{
		callMethod<void>(
			"phoneAccountSelected",
			"(Landroid/telecom/PhoneAccountHandle;Z)V",
			arg0.object(),
			arg1
		);
	}
	void Call::playDtmfTone(jchar arg0)
	{
		callMethod<void>(
			"playDtmfTone",
			"(C)V",
			arg0
		);
	}
	void Call::postDialContinue(jboolean arg0)
	{
		callMethod<void>(
			"postDialContinue",
			"(Z)V",
			arg0
		);
	}
	void Call::pullExternalCall()
	{
		callMethod<void>(
			"pullExternalCall",
			"()V"
		);
	}
	void Call::putExtras(android::os::Bundle arg0)
	{
		callMethod<void>(
			"putExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Call::registerCallback(android::telecom::Call_Callback arg0)
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/Call$Callback;)V",
			arg0.object()
		);
	}
	void Call::registerCallback(android::telecom::Call_Callback arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/Call$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Call::reject(jboolean arg0, jstring arg1)
	{
		callMethod<void>(
			"reject",
			"(ZLjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void Call::removeExtras(jarray arg0)
	{
		callMethod<void>(
			"removeExtras",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void Call::removeExtras(__JniBaseClass arg0)
	{
		callMethod<void>(
			"removeExtras",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Call::respondToRttRequest(jint arg0, jboolean arg1)
	{
		callMethod<void>(
			"respondToRttRequest",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void Call::sendCallEvent(jstring arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"sendCallEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
	void Call::sendRttRequest()
	{
		callMethod<void>(
			"sendRttRequest",
			"()V"
		);
	}
	void Call::splitFromConference()
	{
		callMethod<void>(
			"splitFromConference",
			"()V"
		);
	}
	void Call::stopDtmfTone()
	{
		callMethod<void>(
			"stopDtmfTone",
			"()V"
		);
	}
	void Call::stopRtt()
	{
		callMethod<void>(
			"stopRtt",
			"()V"
		);
	}
	void Call::swapConference()
	{
		callMethod<void>(
			"swapConference",
			"()V"
		);
	}
	jstring Call::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Call::unhold()
	{
		callMethod<void>(
			"unhold",
			"()V"
		);
	}
	void Call::unregisterCallback(android::telecom::Call_Callback arg0)
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/telecom/Call$Callback;)V",
			arg0.object()
		);
	}
} // namespace android::telecom
