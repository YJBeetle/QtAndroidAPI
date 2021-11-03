#include "../../JArray.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "./Call_Callback.hpp"
#include "./Call_Details.hpp"
#include "./Call_RttCall.hpp"
#include "./InCallService_VideoCall.hpp"
#include "./PhoneAccountHandle.hpp"
#include "../../JString.hpp"
#include "./Call.hpp"

namespace android::telecom
{
	// Fields
	JString Call::AVAILABLE_PHONE_ACCOUNTS()
	{
		return getStaticObjectField(
			"android.telecom.Call",
			"AVAILABLE_PHONE_ACCOUNTS",
			"Ljava/lang/String;"
		);
	}
	JString Call::EXTRA_LAST_EMERGENCY_CALLBACK_TIME_MILLIS()
	{
		return getStaticObjectField(
			"android.telecom.Call",
			"EXTRA_LAST_EMERGENCY_CALLBACK_TIME_MILLIS",
			"Ljava/lang/String;"
		);
	}
	JString Call::EXTRA_SILENT_RINGING_REQUESTED()
	{
		return getStaticObjectField(
			"android.telecom.Call",
			"EXTRA_SILENT_RINGING_REQUESTED",
			"Ljava/lang/String;"
		);
	}
	JString Call::EXTRA_SUGGESTED_PHONE_ACCOUNTS()
	{
		return getStaticObjectField(
			"android.telecom.Call",
			"EXTRA_SUGGESTED_PHONE_ACCOUNTS",
			"Ljava/lang/String;"
		);
	}
	jint Call::REJECT_REASON_DECLINED()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"REJECT_REASON_DECLINED"
		);
	}
	jint Call::REJECT_REASON_UNWANTED()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"REJECT_REASON_UNWANTED"
		);
	}
	jint Call::STATE_ACTIVE()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"STATE_ACTIVE"
		);
	}
	jint Call::STATE_AUDIO_PROCESSING()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"STATE_AUDIO_PROCESSING"
		);
	}
	jint Call::STATE_CONNECTING()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"STATE_CONNECTING"
		);
	}
	jint Call::STATE_DIALING()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"STATE_DIALING"
		);
	}
	jint Call::STATE_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"STATE_DISCONNECTED"
		);
	}
	jint Call::STATE_DISCONNECTING()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"STATE_DISCONNECTING"
		);
	}
	jint Call::STATE_HOLDING()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"STATE_HOLDING"
		);
	}
	jint Call::STATE_NEW()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"STATE_NEW"
		);
	}
	jint Call::STATE_PULLING_CALL()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"STATE_PULLING_CALL"
		);
	}
	jint Call::STATE_RINGING()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"STATE_RINGING"
		);
	}
	jint Call::STATE_SELECT_PHONE_ACCOUNT()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"STATE_SELECT_PHONE_ACCOUNT"
		);
	}
	jint Call::STATE_SIMULATED_RINGING()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"STATE_SIMULATED_RINGING"
		);
	}
	
	// QAndroidJniObject forward
	Call::Call(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void Call::answer(jint arg0) const
	{
		callMethod<void>(
			"answer",
			"(I)V",
			arg0
		);
	}
	void Call::conference(android::telecom::Call arg0) const
	{
		callMethod<void>(
			"conference",
			"(Landroid/telecom/Call;)V",
			arg0.object()
		);
	}
	void Call::deflect(android::net::Uri arg0) const
	{
		callMethod<void>(
			"deflect",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void Call::disconnect() const
	{
		callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	JObject Call::getCannedTextResponses() const
	{
		return callObjectMethod(
			"getCannedTextResponses",
			"()Ljava/util/List;"
		);
	}
	JObject Call::getChildren() const
	{
		return callObjectMethod(
			"getChildren",
			"()Ljava/util/List;"
		);
	}
	JObject Call::getConferenceableCalls() const
	{
		return callObjectMethod(
			"getConferenceableCalls",
			"()Ljava/util/List;"
		);
	}
	android::telecom::Call_Details Call::getDetails() const
	{
		return callObjectMethod(
			"getDetails",
			"()Landroid/telecom/Call$Details;"
		);
	}
	android::telecom::Call Call::getGenericConferenceActiveChildCall() const
	{
		return callObjectMethod(
			"getGenericConferenceActiveChildCall",
			"()Landroid/telecom/Call;"
		);
	}
	android::telecom::Call Call::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Landroid/telecom/Call;"
		);
	}
	JString Call::getRemainingPostDialSequence() const
	{
		return callObjectMethod(
			"getRemainingPostDialSequence",
			"()Ljava/lang/String;"
		);
	}
	android::telecom::Call_RttCall Call::getRttCall() const
	{
		return callObjectMethod(
			"getRttCall",
			"()Landroid/telecom/Call$RttCall;"
		);
	}
	jint Call::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	android::telecom::InCallService_VideoCall Call::getVideoCall() const
	{
		return callObjectMethod(
			"getVideoCall",
			"()Landroid/telecom/InCallService$VideoCall;"
		);
	}
	void Call::handoverTo(android::telecom::PhoneAccountHandle arg0, jint arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"handoverTo",
			"(Landroid/telecom/PhoneAccountHandle;ILandroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void Call::hold() const
	{
		callMethod<void>(
			"hold",
			"()V"
		);
	}
	jboolean Call::isRttActive() const
	{
		return callMethod<jboolean>(
			"isRttActive",
			"()Z"
		);
	}
	void Call::mergeConference() const
	{
		callMethod<void>(
			"mergeConference",
			"()V"
		);
	}
	void Call::phoneAccountSelected(android::telecom::PhoneAccountHandle arg0, jboolean arg1) const
	{
		callMethod<void>(
			"phoneAccountSelected",
			"(Landroid/telecom/PhoneAccountHandle;Z)V",
			arg0.object(),
			arg1
		);
	}
	void Call::playDtmfTone(jchar arg0) const
	{
		callMethod<void>(
			"playDtmfTone",
			"(C)V",
			arg0
		);
	}
	void Call::postDialContinue(jboolean arg0) const
	{
		callMethod<void>(
			"postDialContinue",
			"(Z)V",
			arg0
		);
	}
	void Call::pullExternalCall() const
	{
		callMethod<void>(
			"pullExternalCall",
			"()V"
		);
	}
	void Call::putExtras(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"putExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Call::registerCallback(android::telecom::Call_Callback arg0) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/Call$Callback;)V",
			arg0.object()
		);
	}
	void Call::registerCallback(android::telecom::Call_Callback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/Call$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Call::reject(jint arg0) const
	{
		callMethod<void>(
			"reject",
			"(I)V",
			arg0
		);
	}
	void Call::reject(jboolean arg0, JString arg1) const
	{
		callMethod<void>(
			"reject",
			"(ZLjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	void Call::removeExtras(JArray arg0) const
	{
		callMethod<void>(
			"removeExtras",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void Call::removeExtras(JObject arg0) const
	{
		callMethod<void>(
			"removeExtras",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Call::respondToRttRequest(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"respondToRttRequest",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void Call::sendCallEvent(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"sendCallEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void Call::sendRttRequest() const
	{
		callMethod<void>(
			"sendRttRequest",
			"()V"
		);
	}
	void Call::splitFromConference() const
	{
		callMethod<void>(
			"splitFromConference",
			"()V"
		);
	}
	void Call::stopDtmfTone() const
	{
		callMethod<void>(
			"stopDtmfTone",
			"()V"
		);
	}
	void Call::stopRtt() const
	{
		callMethod<void>(
			"stopRtt",
			"()V"
		);
	}
	void Call::swapConference() const
	{
		callMethod<void>(
			"swapConference",
			"()V"
		);
	}
	JString Call::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Call::unhold() const
	{
		callMethod<void>(
			"unhold",
			"()V"
		);
	}
	void Call::unregisterCallback(android::telecom::Call_Callback arg0) const
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/telecom/Call$Callback;)V",
			arg0.object()
		);
	}
} // namespace android::telecom

