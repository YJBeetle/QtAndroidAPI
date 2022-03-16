#include "../os/Bundle.hpp"
#include "../../JString.hpp"
#include "./BroadcastReceiver_PendingResult.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	
	// Methods
	void BroadcastReceiver_PendingResult::abortBroadcast() const
	{
		callMethod<void>(
			"abortBroadcast",
			"()V"
		);
	}
	void BroadcastReceiver_PendingResult::clearAbortBroadcast() const
	{
		callMethod<void>(
			"clearAbortBroadcast",
			"()V"
		);
	}
	void BroadcastReceiver_PendingResult::finish() const
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	jboolean BroadcastReceiver_PendingResult::getAbortBroadcast() const
	{
		return callMethod<jboolean>(
			"getAbortBroadcast",
			"()Z"
		);
	}
	jint BroadcastReceiver_PendingResult::getResultCode() const
	{
		return callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	JString BroadcastReceiver_PendingResult::getResultData() const
	{
		return callObjectMethod(
			"getResultData",
			"()Ljava/lang/String;"
		);
	}
	android::os::Bundle BroadcastReceiver_PendingResult::getResultExtras(jboolean arg0) const
	{
		return callObjectMethod(
			"getResultExtras",
			"(Z)Landroid/os/Bundle;",
			arg0
		);
	}
	void BroadcastReceiver_PendingResult::setResult(jint arg0, JString arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"setResult",
			"(ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	void BroadcastReceiver_PendingResult::setResultCode(jint arg0) const
	{
		callMethod<void>(
			"setResultCode",
			"(I)V",
			arg0
		);
	}
	void BroadcastReceiver_PendingResult::setResultData(JString arg0) const
	{
		callMethod<void>(
			"setResultData",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void BroadcastReceiver_PendingResult::setResultExtras(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setResultExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
} // namespace android::content

