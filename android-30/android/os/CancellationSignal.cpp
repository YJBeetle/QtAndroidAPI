#include "./CancellationSignal.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	CancellationSignal::CancellationSignal(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CancellationSignal::CancellationSignal()
		: __JniBaseClass(
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
	void CancellationSignal::setOnCancelListener(__JniBaseClass arg0)
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

