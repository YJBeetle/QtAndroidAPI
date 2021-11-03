#include "./BroadcastReceiver_PendingResult.hpp"
#include "./Context.hpp"
#include "./Intent.hpp"
#include "../os/Bundle.hpp"
#include "./BroadcastReceiver.hpp"

namespace android::content
{
	// Fields
	
	// QJniObject forward
	BroadcastReceiver::BroadcastReceiver(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	BroadcastReceiver::BroadcastReceiver()
		: JObject(
			"android.content.BroadcastReceiver",
			"()V"
		) {}
	
	// Methods
	void BroadcastReceiver::abortBroadcast()
	{
		callMethod<void>(
			"abortBroadcast",
			"()V"
		);
	}
	void BroadcastReceiver::clearAbortBroadcast()
	{
		callMethod<void>(
			"clearAbortBroadcast",
			"()V"
		);
	}
	jboolean BroadcastReceiver::getAbortBroadcast()
	{
		return callMethod<jboolean>(
			"getAbortBroadcast",
			"()Z"
		);
	}
	jboolean BroadcastReceiver::getDebugUnregister()
	{
		return callMethod<jboolean>(
			"getDebugUnregister",
			"()Z"
		);
	}
	jint BroadcastReceiver::getResultCode()
	{
		return callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	jstring BroadcastReceiver::getResultData()
	{
		return callObjectMethod(
			"getResultData",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::os::Bundle BroadcastReceiver::getResultExtras(jboolean arg0)
	{
		return callObjectMethod(
			"getResultExtras",
			"(Z)Landroid/os/Bundle;",
			arg0
		);
	}
	android::content::BroadcastReceiver_PendingResult BroadcastReceiver::goAsync()
	{
		return callObjectMethod(
			"goAsync",
			"()Landroid/content/BroadcastReceiver$PendingResult;"
		);
	}
	jboolean BroadcastReceiver::isInitialStickyBroadcast()
	{
		return callMethod<jboolean>(
			"isInitialStickyBroadcast",
			"()Z"
		);
	}
	jboolean BroadcastReceiver::isOrderedBroadcast()
	{
		return callMethod<jboolean>(
			"isOrderedBroadcast",
			"()Z"
		);
	}
	void BroadcastReceiver::onReceive(android::content::Context arg0, android::content::Intent arg1)
	{
		callMethod<void>(
			"onReceive",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	JObject BroadcastReceiver::peekService(android::content::Context arg0, android::content::Intent arg1)
	{
		return callObjectMethod(
			"peekService",
			"(Landroid/content/Context;Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object(),
			arg1.object()
		);
	}
	void BroadcastReceiver::setDebugUnregister(jboolean arg0)
	{
		callMethod<void>(
			"setDebugUnregister",
			"(Z)V",
			arg0
		);
	}
	void BroadcastReceiver::setOrderedHint(jboolean arg0)
	{
		callMethod<void>(
			"setOrderedHint",
			"(Z)V",
			arg0
		);
	}
	void BroadcastReceiver::setResult(jint arg0, jstring arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"setResult",
			"(ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void BroadcastReceiver::setResultCode(jint arg0)
	{
		callMethod<void>(
			"setResultCode",
			"(I)V",
			arg0
		);
	}
	void BroadcastReceiver::setResultData(jstring arg0)
	{
		callMethod<void>(
			"setResultData",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void BroadcastReceiver::setResultExtras(android::os::Bundle arg0)
	{
		callMethod<void>(
			"setResultExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
} // namespace android::content

