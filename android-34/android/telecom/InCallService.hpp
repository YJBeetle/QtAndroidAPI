#pragma once

#include "../bluetooth/BluetoothDevice.def.hpp"
#include "../content/Intent.def.hpp"
#include "../os/Bundle.def.hpp"
#include "./Call.def.hpp"
#include "./CallAudioState.def.hpp"
#include "./CallEndpoint.def.hpp"
#include "../../JString.hpp"
#include "./InCallService.def.hpp"

namespace android::telecom
{
	// Fields
	inline JString InCallService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.telecom.InCallService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline InCallService::InCallService()
		: android::app::Service(
			"android.telecom.InCallService",
			"()V"
		) {}
	
	// Methods
	inline jboolean InCallService::canAddCall() const
	{
		return callMethod<jboolean>(
			"canAddCall",
			"()Z"
		);
	}
	inline android::telecom::CallAudioState InCallService::getCallAudioState() const
	{
		return callObjectMethod(
			"getCallAudioState",
			"()Landroid/telecom/CallAudioState;"
		);
	}
	inline JObject InCallService::getCalls() const
	{
		return callObjectMethod(
			"getCalls",
			"()Ljava/util/List;"
		);
	}
	inline android::telecom::CallEndpoint InCallService::getCurrentCallEndpoint() const
	{
		return callObjectMethod(
			"getCurrentCallEndpoint",
			"()Landroid/telecom/CallEndpoint;"
		);
	}
	inline void InCallService::onAvailableCallEndpointsChanged(JObject arg0) const
	{
		callMethod<void>(
			"onAvailableCallEndpointsChanged",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline JObject InCallService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void InCallService::onBringToForeground(jboolean arg0) const
	{
		callMethod<void>(
			"onBringToForeground",
			"(Z)V",
			arg0
		);
	}
	inline void InCallService::onCallAdded(android::telecom::Call arg0) const
	{
		callMethod<void>(
			"onCallAdded",
			"(Landroid/telecom/Call;)V",
			arg0.object()
		);
	}
	inline void InCallService::onCallAudioStateChanged(android::telecom::CallAudioState arg0) const
	{
		callMethod<void>(
			"onCallAudioStateChanged",
			"(Landroid/telecom/CallAudioState;)V",
			arg0.object()
		);
	}
	inline void InCallService::onCallEndpointChanged(android::telecom::CallEndpoint arg0) const
	{
		callMethod<void>(
			"onCallEndpointChanged",
			"(Landroid/telecom/CallEndpoint;)V",
			arg0.object()
		);
	}
	inline void InCallService::onCallRemoved(android::telecom::Call arg0) const
	{
		callMethod<void>(
			"onCallRemoved",
			"(Landroid/telecom/Call;)V",
			arg0.object()
		);
	}
	inline void InCallService::onCanAddCallChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onCanAddCallChanged",
			"(Z)V",
			arg0
		);
	}
	inline void InCallService::onConnectionEvent(android::telecom::Call arg0, JString arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"onConnectionEvent",
			"(Landroid/telecom/Call;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void InCallService::onMuteStateChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onMuteStateChanged",
			"(Z)V",
			arg0
		);
	}
	inline void InCallService::onSilenceRinger() const
	{
		callMethod<void>(
			"onSilenceRinger",
			"()V"
		);
	}
	inline jboolean InCallService::onUnbind(android::content::Intent arg0) const
	{
		return callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
	inline void InCallService::requestBluetoothAudio(android::bluetooth::BluetoothDevice arg0) const
	{
		callMethod<void>(
			"requestBluetoothAudio",
			"(Landroid/bluetooth/BluetoothDevice;)V",
			arg0.object()
		);
	}
	inline void InCallService::requestCallEndpointChange(android::telecom::CallEndpoint arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"requestCallEndpointChange",
			"(Landroid/telecom/CallEndpoint;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void InCallService::setAudioRoute(jint arg0) const
	{
		callMethod<void>(
			"setAudioRoute",
			"(I)V",
			arg0
		);
	}
	inline void InCallService::setMuted(jboolean arg0) const
	{
		callMethod<void>(
			"setMuted",
			"(Z)V",
			arg0
		);
	}
} // namespace android::telecom

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telecom;
#endif
