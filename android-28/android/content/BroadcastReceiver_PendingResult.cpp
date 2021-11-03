#include "../os/Bundle.hpp"
#include "./BroadcastReceiver_PendingResult.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	BroadcastReceiver_PendingResult::BroadcastReceiver_PendingResult(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void BroadcastReceiver_PendingResult::abortBroadcast()
	{
		callMethod<void>(
			"abortBroadcast",
			"()V"
		);
	}
	void BroadcastReceiver_PendingResult::clearAbortBroadcast()
	{
		callMethod<void>(
			"clearAbortBroadcast",
			"()V"
		);
	}
	void BroadcastReceiver_PendingResult::finish()
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	jboolean BroadcastReceiver_PendingResult::getAbortBroadcast()
	{
		return callMethod<jboolean>(
			"getAbortBroadcast",
			"()Z"
		);
	}
	jint BroadcastReceiver_PendingResult::getResultCode()
	{
		return callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	jstring BroadcastReceiver_PendingResult::getResultData()
	{
		return callObjectMethod(
			"getResultData",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::os::Bundle BroadcastReceiver_PendingResult::getResultExtras(jboolean arg0)
	{
		return callObjectMethod(
			"getResultExtras",
			"(Z)Landroid/os/Bundle;",
			arg0
		);
	}
	void BroadcastReceiver_PendingResult::setResult(jint arg0, jstring arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"setResult",
			"(ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void BroadcastReceiver_PendingResult::setResultCode(jint arg0)
	{
		callMethod<void>(
			"setResultCode",
			"(I)V",
			arg0
		);
	}
	void BroadcastReceiver_PendingResult::setResultData(jstring arg0)
	{
		callMethod<void>(
			"setResultData",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void BroadcastReceiver_PendingResult::setResultExtras(android::os::Bundle arg0)
	{
		callMethod<void>(
			"setResultExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
} // namespace android::content

