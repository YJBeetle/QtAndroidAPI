#pragma once

#include "../os/Bundle.def.hpp"
#include "./Call.def.hpp"
#include "./Call_Details.def.hpp"
#include "./Call_RttCall.def.hpp"
#include "./InCallService_VideoCall.def.hpp"
#include "../../JString.hpp"
#include "./Call_Callback.def.hpp"

namespace android::telecom
{
	// Fields
	inline jint Call_Callback::HANDOVER_FAILURE_DEST_APP_REJECTED()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Callback",
			"HANDOVER_FAILURE_DEST_APP_REJECTED"
		);
	}
	inline jint Call_Callback::HANDOVER_FAILURE_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Callback",
			"HANDOVER_FAILURE_NOT_SUPPORTED"
		);
	}
	inline jint Call_Callback::HANDOVER_FAILURE_ONGOING_EMERGENCY_CALL()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Callback",
			"HANDOVER_FAILURE_ONGOING_EMERGENCY_CALL"
		);
	}
	inline jint Call_Callback::HANDOVER_FAILURE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Callback",
			"HANDOVER_FAILURE_UNKNOWN"
		);
	}
	inline jint Call_Callback::HANDOVER_FAILURE_USER_REJECTED()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Callback",
			"HANDOVER_FAILURE_USER_REJECTED"
		);
	}
	
	// Constructors
	inline Call_Callback::Call_Callback()
		: JObject(
			"android.telecom.Call$Callback",
			"()V"
		) {}
	
	// Methods
	inline void Call_Callback::onCallDestroyed(android::telecom::Call arg0) const
	{
		callMethod<void>(
			"onCallDestroyed",
			"(Landroid/telecom/Call;)V",
			arg0.object()
		);
	}
	inline void Call_Callback::onCannedTextResponsesLoaded(android::telecom::Call arg0, JObject arg1) const
	{
		callMethod<void>(
			"onCannedTextResponsesLoaded",
			"(Landroid/telecom/Call;Ljava/util/List;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Call_Callback::onChildrenChanged(android::telecom::Call arg0, JObject arg1) const
	{
		callMethod<void>(
			"onChildrenChanged",
			"(Landroid/telecom/Call;Ljava/util/List;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Call_Callback::onConferenceableCallsChanged(android::telecom::Call arg0, JObject arg1) const
	{
		callMethod<void>(
			"onConferenceableCallsChanged",
			"(Landroid/telecom/Call;Ljava/util/List;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Call_Callback::onConnectionEvent(android::telecom::Call arg0, JString arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"onConnectionEvent",
			"(Landroid/telecom/Call;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void Call_Callback::onDetailsChanged(android::telecom::Call arg0, android::telecom::Call_Details arg1) const
	{
		callMethod<void>(
			"onDetailsChanged",
			"(Landroid/telecom/Call;Landroid/telecom/Call$Details;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Call_Callback::onHandoverComplete(android::telecom::Call arg0) const
	{
		callMethod<void>(
			"onHandoverComplete",
			"(Landroid/telecom/Call;)V",
			arg0.object()
		);
	}
	inline void Call_Callback::onHandoverFailed(android::telecom::Call arg0, jint arg1) const
	{
		callMethod<void>(
			"onHandoverFailed",
			"(Landroid/telecom/Call;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void Call_Callback::onParentChanged(android::telecom::Call arg0, android::telecom::Call arg1) const
	{
		callMethod<void>(
			"onParentChanged",
			"(Landroid/telecom/Call;Landroid/telecom/Call;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Call_Callback::onPostDialWait(android::telecom::Call arg0, JString arg1) const
	{
		callMethod<void>(
			"onPostDialWait",
			"(Landroid/telecom/Call;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void Call_Callback::onRttInitiationFailure(android::telecom::Call arg0, jint arg1) const
	{
		callMethod<void>(
			"onRttInitiationFailure",
			"(Landroid/telecom/Call;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void Call_Callback::onRttModeChanged(android::telecom::Call arg0, jint arg1) const
	{
		callMethod<void>(
			"onRttModeChanged",
			"(Landroid/telecom/Call;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void Call_Callback::onRttRequest(android::telecom::Call arg0, jint arg1) const
	{
		callMethod<void>(
			"onRttRequest",
			"(Landroid/telecom/Call;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void Call_Callback::onRttStatusChanged(android::telecom::Call arg0, jboolean arg1, android::telecom::Call_RttCall arg2) const
	{
		callMethod<void>(
			"onRttStatusChanged",
			"(Landroid/telecom/Call;ZLandroid/telecom/Call$RttCall;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void Call_Callback::onStateChanged(android::telecom::Call arg0, jint arg1) const
	{
		callMethod<void>(
			"onStateChanged",
			"(Landroid/telecom/Call;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void Call_Callback::onVideoCallChanged(android::telecom::Call arg0, android::telecom::InCallService_VideoCall arg1) const
	{
		callMethod<void>(
			"onVideoCallChanged",
			"(Landroid/telecom/Call;Landroid/telecom/InCallService$VideoCall;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::telecom

// Base class headers

