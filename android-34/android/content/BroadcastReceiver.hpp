#pragma once

#include "./BroadcastReceiver_PendingResult.def.hpp"
#include "./Context.def.hpp"
#include "./Intent.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../../JString.hpp"
#include "./BroadcastReceiver.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	inline BroadcastReceiver::BroadcastReceiver()
		: JObject(
			"android.content.BroadcastReceiver",
			"()V"
		) {}
	
	// Methods
	inline void BroadcastReceiver::abortBroadcast() const
	{
		callMethod<void>(
			"abortBroadcast",
			"()V"
		);
	}
	inline void BroadcastReceiver::clearAbortBroadcast() const
	{
		callMethod<void>(
			"clearAbortBroadcast",
			"()V"
		);
	}
	inline jboolean BroadcastReceiver::getAbortBroadcast() const
	{
		return callMethod<jboolean>(
			"getAbortBroadcast",
			"()Z"
		);
	}
	inline jboolean BroadcastReceiver::getDebugUnregister() const
	{
		return callMethod<jboolean>(
			"getDebugUnregister",
			"()Z"
		);
	}
	inline jint BroadcastReceiver::getResultCode() const
	{
		return callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	inline JString BroadcastReceiver::getResultData() const
	{
		return callObjectMethod(
			"getResultData",
			"()Ljava/lang/String;"
		);
	}
	inline android::os::Bundle BroadcastReceiver::getResultExtras(jboolean arg0) const
	{
		return callObjectMethod(
			"getResultExtras",
			"(Z)Landroid/os/Bundle;",
			arg0
		);
	}
	inline JString BroadcastReceiver::getSentFromPackage() const
	{
		return callObjectMethod(
			"getSentFromPackage",
			"()Ljava/lang/String;"
		);
	}
	inline jint BroadcastReceiver::getSentFromUid() const
	{
		return callMethod<jint>(
			"getSentFromUid",
			"()I"
		);
	}
	inline android::content::BroadcastReceiver_PendingResult BroadcastReceiver::goAsync() const
	{
		return callObjectMethod(
			"goAsync",
			"()Landroid/content/BroadcastReceiver$PendingResult;"
		);
	}
	inline jboolean BroadcastReceiver::isInitialStickyBroadcast() const
	{
		return callMethod<jboolean>(
			"isInitialStickyBroadcast",
			"()Z"
		);
	}
	inline jboolean BroadcastReceiver::isOrderedBroadcast() const
	{
		return callMethod<jboolean>(
			"isOrderedBroadcast",
			"()Z"
		);
	}
	inline void BroadcastReceiver::onReceive(android::content::Context arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"onReceive",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject BroadcastReceiver::peekService(android::content::Context arg0, android::content::Intent arg1) const
	{
		return callObjectMethod(
			"peekService",
			"(Landroid/content/Context;Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object(),
			arg1.object()
		);
	}
	inline void BroadcastReceiver::setDebugUnregister(jboolean arg0) const
	{
		callMethod<void>(
			"setDebugUnregister",
			"(Z)V",
			arg0
		);
	}
	inline void BroadcastReceiver::setOrderedHint(jboolean arg0) const
	{
		callMethod<void>(
			"setOrderedHint",
			"(Z)V",
			arg0
		);
	}
	inline void BroadcastReceiver::setResult(jint arg0, JString arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"setResult",
			"(ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void BroadcastReceiver::setResultCode(jint arg0) const
	{
		callMethod<void>(
			"setResultCode",
			"(I)V",
			arg0
		);
	}
	inline void BroadcastReceiver::setResultData(JString arg0) const
	{
		callMethod<void>(
			"setResultData",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void BroadcastReceiver::setResultExtras(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setResultExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
} // namespace android::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
