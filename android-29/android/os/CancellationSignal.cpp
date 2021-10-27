#include "./CancellationSignal.hpp"

namespace android::os
{
	// Fields
	
	CancellationSignal::CancellationSignal(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CancellationSignal::CancellationSignal()
	{
		__thiz = QAndroidJniObject(
			"android.os.CancellationSignal",
			"()V"
		);
	}
	
	// Methods
	void CancellationSignal::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jboolean CancellationSignal::isCanceled()
	{
		return __thiz.callMethod<jboolean>(
			"isCanceled",
			"()Z"
		);
	}
	void CancellationSignal::setOnCancelListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnCancelListener",
			"(Landroid/os/CancellationSignal$OnCancelListener;)V",
			arg0.__jniObject().object()
		);
	}
	void CancellationSignal::throwIfCanceled()
	{
		__thiz.callMethod<void>(
			"throwIfCanceled",
			"()V"
		);
	}
} // namespace android::os

