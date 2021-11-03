#include "./CancellationSignal.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	CancellationSignal::CancellationSignal(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	CancellationSignal::CancellationSignal()
		: JObject(
			"android.os.CancellationSignal",
			"()V"
		) {}
	
	// Methods
	void CancellationSignal::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jboolean CancellationSignal::isCanceled() const
	{
		return callMethod<jboolean>(
			"isCanceled",
			"()Z"
		);
	}
	void CancellationSignal::setOnCancelListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnCancelListener",
			"(Landroid/os/CancellationSignal$OnCancelListener;)V",
			arg0.object()
		);
	}
	void CancellationSignal::throwIfCanceled() const
	{
		callMethod<void>(
			"throwIfCanceled",
			"()V"
		);
	}
} // namespace android::os

