#include "./BroadcastReceiver_PendingResult.hpp"
#include "./Context.hpp"
#include "./Intent.hpp"
#include "../os/Bundle.hpp"
#include "../../JString.hpp"
#include "./BroadcastReceiver.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	BroadcastReceiver::BroadcastReceiver()
		: JObject(
			"android.content.BroadcastReceiver",
			"()V"
		) {}
	
	// Methods
	void BroadcastReceiver::abortBroadcast() const
	{
		callMethod<void>(
			"abortBroadcast",
			"()V"
		);
	}
	void BroadcastReceiver::clearAbortBroadcast() const
	{
		callMethod<void>(
			"clearAbortBroadcast",
			"()V"
		);
	}
	jboolean BroadcastReceiver::getAbortBroadcast() const
	{
		return callMethod<jboolean>(
			"getAbortBroadcast",
			"()Z"
		);
	}
	jboolean BroadcastReceiver::getDebugUnregister() const
	{
		return callMethod<jboolean>(
			"getDebugUnregister",
			"()Z"
		);
	}
	jint BroadcastReceiver::getResultCode() const
	{
		return callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	JString BroadcastReceiver::getResultData() const
	{
		return callObjectMethod(
			"getResultData",
			"()Ljava/lang/String;"
		);
	}
	android::os::Bundle BroadcastReceiver::getResultExtras(jboolean arg0) const
	{
		return callObjectMethod(
			"getResultExtras",
			"(Z)Landroid/os/Bundle;",
			arg0
		);
	}
	android::content::BroadcastReceiver_PendingResult BroadcastReceiver::goAsync() const
	{
		return callObjectMethod(
			"goAsync",
			"()Landroid/content/BroadcastReceiver$PendingResult;"
		);
	}
	jboolean BroadcastReceiver::isInitialStickyBroadcast() const
	{
		return callMethod<jboolean>(
			"isInitialStickyBroadcast",
			"()Z"
		);
	}
	jboolean BroadcastReceiver::isOrderedBroadcast() const
	{
		return callMethod<jboolean>(
			"isOrderedBroadcast",
			"()Z"
		);
	}
	void BroadcastReceiver::onReceive(android::content::Context arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"onReceive",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	JObject BroadcastReceiver::peekService(android::content::Context arg0, android::content::Intent arg1) const
	{
		return callObjectMethod(
			"peekService",
			"(Landroid/content/Context;Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object(),
			arg1.object()
		);
	}
	void BroadcastReceiver::setDebugUnregister(jboolean arg0) const
	{
		callMethod<void>(
			"setDebugUnregister",
			"(Z)V",
			arg0
		);
	}
	void BroadcastReceiver::setOrderedHint(jboolean arg0) const
	{
		callMethod<void>(
			"setOrderedHint",
			"(Z)V",
			arg0
		);
	}
	void BroadcastReceiver::setResult(jint arg0, JString arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"setResult",
			"(ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	void BroadcastReceiver::setResultCode(jint arg0) const
	{
		callMethod<void>(
			"setResultCode",
			"(I)V",
			arg0
		);
	}
	void BroadcastReceiver::setResultData(JString arg0) const
	{
		callMethod<void>(
			"setResultData",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void BroadcastReceiver::setResultExtras(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setResultExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
} // namespace android::content

