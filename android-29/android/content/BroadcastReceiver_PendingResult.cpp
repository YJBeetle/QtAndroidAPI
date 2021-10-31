#include "../os/Bundle.hpp"
#include "./BroadcastReceiver_PendingResult.hpp"

namespace android::content
{
	// Fields
	
	BroadcastReceiver_PendingResult::BroadcastReceiver_PendingResult(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void BroadcastReceiver_PendingResult::abortBroadcast()
	{
		__thiz.callMethod<void>(
			"abortBroadcast",
			"()V"
		);
	}
	void BroadcastReceiver_PendingResult::clearAbortBroadcast()
	{
		__thiz.callMethod<void>(
			"clearAbortBroadcast",
			"()V"
		);
	}
	void BroadcastReceiver_PendingResult::finish()
	{
		__thiz.callMethod<void>(
			"finish",
			"()V"
		);
	}
	jboolean BroadcastReceiver_PendingResult::getAbortBroadcast()
	{
		return __thiz.callMethod<jboolean>(
			"getAbortBroadcast",
			"()Z"
		);
	}
	jint BroadcastReceiver_PendingResult::getResultCode()
	{
		return __thiz.callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	jstring BroadcastReceiver_PendingResult::getResultData()
	{
		return __thiz.callObjectMethod(
			"getResultData",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject BroadcastReceiver_PendingResult::getResultExtras(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"getResultExtras",
			"(Z)Landroid/os/Bundle;",
			arg0
		);
	}
	void BroadcastReceiver_PendingResult::setResult(jint arg0, jstring arg1, android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"setResult",
			"(ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void BroadcastReceiver_PendingResult::setResultCode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setResultCode",
			"(I)V",
			arg0
		);
	}
	void BroadcastReceiver_PendingResult::setResultData(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setResultData",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void BroadcastReceiver_PendingResult::setResultExtras(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"setResultExtras",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::content

