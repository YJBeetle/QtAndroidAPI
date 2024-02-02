#pragma once

#include "../os/Bundle.def.hpp"
#include "../os/ParcelUuid.def.hpp"
#include "./CallEndpoint.def.hpp"
#include "./DisconnectCause.def.hpp"
#include "../../JString.hpp"
#include "./CallControl.def.hpp"

namespace android::telecom
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void CallControl::answer(jint arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"answer",
			"(ILjava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline void CallControl::disconnect(android::telecom::DisconnectCause arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"disconnect",
			"(Landroid/telecom/DisconnectCause;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::os::ParcelUuid CallControl::getCallId() const
	{
		return callObjectMethod(
			"getCallId",
			"()Landroid/os/ParcelUuid;"
		);
	}
	inline void CallControl::requestCallEndpointChange(android::telecom::CallEndpoint arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"requestCallEndpointChange",
			"(Landroid/telecom/CallEndpoint;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void CallControl::sendEvent(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"sendEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void CallControl::setActive(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"setActive",
			"(Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void CallControl::setInactive(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"setInactive",
			"(Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void CallControl::startCallStreaming(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"startCallStreaming",
			"(Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::telecom

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telecom;
#endif
