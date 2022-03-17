#pragma once

#include "../../JArray.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Handler.def.hpp"
#include "./Call_Callback.def.hpp"
#include "./Call_Details.def.hpp"
#include "./Call_RttCall.def.hpp"
#include "./InCallService_VideoCall.def.hpp"
#include "./PhoneAccountHandle.def.hpp"
#include "../../JString.hpp"
#include "./Call.def.hpp"

namespace android::telecom
{
	// Fields
	inline JString Call::AVAILABLE_PHONE_ACCOUNTS()
	{
		return getStaticObjectField(
			"android.telecom.Call",
			"AVAILABLE_PHONE_ACCOUNTS",
			"Ljava/lang/String;"
		);
	}
	inline JString Call::EVENT_CLEAR_DIAGNOSTIC_MESSAGE()
	{
		return getStaticObjectField(
			"android.telecom.Call",
			"EVENT_CLEAR_DIAGNOSTIC_MESSAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString Call::EVENT_DISPLAY_DIAGNOSTIC_MESSAGE()
	{
		return getStaticObjectField(
			"android.telecom.Call",
			"EVENT_DISPLAY_DIAGNOSTIC_MESSAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString Call::EXTRA_DIAGNOSTIC_MESSAGE()
	{
		return getStaticObjectField(
			"android.telecom.Call",
			"EXTRA_DIAGNOSTIC_MESSAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString Call::EXTRA_DIAGNOSTIC_MESSAGE_ID()
	{
		return getStaticObjectField(
			"android.telecom.Call",
			"EXTRA_DIAGNOSTIC_MESSAGE_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString Call::EXTRA_LAST_EMERGENCY_CALLBACK_TIME_MILLIS()
	{
		return getStaticObjectField(
			"android.telecom.Call",
			"EXTRA_LAST_EMERGENCY_CALLBACK_TIME_MILLIS",
			"Ljava/lang/String;"
		);
	}
	inline JString Call::EXTRA_SILENT_RINGING_REQUESTED()
	{
		return getStaticObjectField(
			"android.telecom.Call",
			"EXTRA_SILENT_RINGING_REQUESTED",
			"Ljava/lang/String;"
		);
	}
	inline JString Call::EXTRA_SUGGESTED_PHONE_ACCOUNTS()
	{
		return getStaticObjectField(
			"android.telecom.Call",
			"EXTRA_SUGGESTED_PHONE_ACCOUNTS",
			"Ljava/lang/String;"
		);
	}
	inline jint Call::REJECT_REASON_DECLINED()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"REJECT_REASON_DECLINED"
		);
	}
	inline jint Call::REJECT_REASON_UNWANTED()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"REJECT_REASON_UNWANTED"
		);
	}
	inline jint Call::STATE_ACTIVE()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"STATE_ACTIVE"
		);
	}
	inline jint Call::STATE_AUDIO_PROCESSING()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"STATE_AUDIO_PROCESSING"
		);
	}
	inline jint Call::STATE_CONNECTING()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"STATE_CONNECTING"
		);
	}
	inline jint Call::STATE_DIALING()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"STATE_DIALING"
		);
	}
	inline jint Call::STATE_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"STATE_DISCONNECTED"
		);
	}
	inline jint Call::STATE_DISCONNECTING()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"STATE_DISCONNECTING"
		);
	}
	inline jint Call::STATE_HOLDING()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"STATE_HOLDING"
		);
	}
	inline jint Call::STATE_NEW()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"STATE_NEW"
		);
	}
	inline jint Call::STATE_PULLING_CALL()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"STATE_PULLING_CALL"
		);
	}
	inline jint Call::STATE_RINGING()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"STATE_RINGING"
		);
	}
	inline jint Call::STATE_SELECT_PHONE_ACCOUNT()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"STATE_SELECT_PHONE_ACCOUNT"
		);
	}
	inline jint Call::STATE_SIMULATED_RINGING()
	{
		return getStaticField<jint>(
			"android.telecom.Call",
			"STATE_SIMULATED_RINGING"
		);
	}
	
	// Constructors
	
	// Methods
	inline void Call::addConferenceParticipants(JObject arg0) const
	{
		callMethod<void>(
			"addConferenceParticipants",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void Call::answer(jint arg0) const
	{
		callMethod<void>(
			"answer",
			"(I)V",
			arg0
		);
	}
	inline void Call::conference(android::telecom::Call arg0) const
	{
		callMethod<void>(
			"conference",
			"(Landroid/telecom/Call;)V",
			arg0.object()
		);
	}
	inline void Call::deflect(android::net::Uri arg0) const
	{
		callMethod<void>(
			"deflect",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	inline void Call::disconnect() const
	{
		callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	inline JObject Call::getCannedTextResponses() const
	{
		return callObjectMethod(
			"getCannedTextResponses",
			"()Ljava/util/List;"
		);
	}
	inline JObject Call::getChildren() const
	{
		return callObjectMethod(
			"getChildren",
			"()Ljava/util/List;"
		);
	}
	inline JObject Call::getConferenceableCalls() const
	{
		return callObjectMethod(
			"getConferenceableCalls",
			"()Ljava/util/List;"
		);
	}
	inline android::telecom::Call_Details Call::getDetails() const
	{
		return callObjectMethod(
			"getDetails",
			"()Landroid/telecom/Call$Details;"
		);
	}
	inline android::telecom::Call Call::getGenericConferenceActiveChildCall() const
	{
		return callObjectMethod(
			"getGenericConferenceActiveChildCall",
			"()Landroid/telecom/Call;"
		);
	}
	inline android::telecom::Call Call::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Landroid/telecom/Call;"
		);
	}
	inline JString Call::getRemainingPostDialSequence() const
	{
		return callObjectMethod(
			"getRemainingPostDialSequence",
			"()Ljava/lang/String;"
		);
	}
	inline android::telecom::Call_RttCall Call::getRttCall() const
	{
		return callObjectMethod(
			"getRttCall",
			"()Landroid/telecom/Call$RttCall;"
		);
	}
	inline jint Call::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	inline android::telecom::InCallService_VideoCall Call::getVideoCall() const
	{
		return callObjectMethod(
			"getVideoCall",
			"()Landroid/telecom/InCallService$VideoCall;"
		);
	}
	inline void Call::handoverTo(android::telecom::PhoneAccountHandle arg0, jint arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"handoverTo",
			"(Landroid/telecom/PhoneAccountHandle;ILandroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void Call::hold() const
	{
		callMethod<void>(
			"hold",
			"()V"
		);
	}
	inline jboolean Call::isRttActive() const
	{
		return callMethod<jboolean>(
			"isRttActive",
			"()Z"
		);
	}
	inline void Call::mergeConference() const
	{
		callMethod<void>(
			"mergeConference",
			"()V"
		);
	}
	inline void Call::phoneAccountSelected(android::telecom::PhoneAccountHandle arg0, jboolean arg1) const
	{
		callMethod<void>(
			"phoneAccountSelected",
			"(Landroid/telecom/PhoneAccountHandle;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void Call::playDtmfTone(jchar arg0) const
	{
		callMethod<void>(
			"playDtmfTone",
			"(C)V",
			arg0
		);
	}
	inline void Call::postDialContinue(jboolean arg0) const
	{
		callMethod<void>(
			"postDialContinue",
			"(Z)V",
			arg0
		);
	}
	inline void Call::pullExternalCall() const
	{
		callMethod<void>(
			"pullExternalCall",
			"()V"
		);
	}
	inline void Call::putExtras(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"putExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void Call::registerCallback(android::telecom::Call_Callback arg0) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/Call$Callback;)V",
			arg0.object()
		);
	}
	inline void Call::registerCallback(android::telecom::Call_Callback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/Call$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Call::reject(jint arg0) const
	{
		callMethod<void>(
			"reject",
			"(I)V",
			arg0
		);
	}
	inline void Call::reject(jboolean arg0, JString arg1) const
	{
		callMethod<void>(
			"reject",
			"(ZLjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void Call::removeExtras(JArray arg0) const
	{
		callMethod<void>(
			"removeExtras",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void Call::removeExtras(JObject arg0) const
	{
		callMethod<void>(
			"removeExtras",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void Call::respondToRttRequest(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"respondToRttRequest",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	inline void Call::sendCallEvent(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"sendCallEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void Call::sendRttRequest() const
	{
		callMethod<void>(
			"sendRttRequest",
			"()V"
		);
	}
	inline void Call::splitFromConference() const
	{
		callMethod<void>(
			"splitFromConference",
			"()V"
		);
	}
	inline void Call::stopDtmfTone() const
	{
		callMethod<void>(
			"stopDtmfTone",
			"()V"
		);
	}
	inline void Call::stopRtt() const
	{
		callMethod<void>(
			"stopRtt",
			"()V"
		);
	}
	inline void Call::swapConference() const
	{
		callMethod<void>(
			"swapConference",
			"()V"
		);
	}
	inline JString Call::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Call::unhold() const
	{
		callMethod<void>(
			"unhold",
			"()V"
		);
	}
	inline void Call::unregisterCallback(android::telecom::Call_Callback arg0) const
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/telecom/Call$Callback;)V",
			arg0.object()
		);
	}
} // namespace android::telecom

// Base class headers

