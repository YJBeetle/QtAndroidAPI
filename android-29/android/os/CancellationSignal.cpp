#include "./CancellationSignal.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	CancellationSignal::CancellationSignal(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CancellationSignal::CancellationSignal()
		: JObject(
			"android.os.CancellationSignal",
			"()V"
		) {}
	
	// Methods
	void CancellationSignal::cancel()
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jboolean CancellationSignal::isCanceled()
	{
		return callMethod<jboolean>(
			"isCanceled",
			"()Z"
		);
	}
	void CancellationSignal::setOnCancelListener(JObject arg0)
	{
		callMethod<void>(
			"setOnCancelListener",
			"(Landroid/os/CancellationSignal$OnCancelListener;)V",
			arg0.object()
		);
	}
	void CancellationSignal::throwIfCanceled()
	{
		callMethod<void>(
			"throwIfCanceled",
			"()V"
		);
	}
} // namespace android::os

