#pragma once

#ifndef ANDROID_OS_CANCELLATIONSIGNAL
#define ANDROID_OS_CANCELLATIONSIGNAL

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::os
{
	class CancellationSignal : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void cancel();
		jboolean isCanceled();
		void throwIfCanceled();
		void setOnCancelListener(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void CancellationSignal::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.CancellationSignal",
			"()V");
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
	void CancellationSignal::throwIfCanceled()
	{
		__thiz.callMethod<void>(
			"throwIfCanceled",
			"()V"
		);
	}
	void CancellationSignal::setOnCancelListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnCancelListener",
			"(Landroid/os/CancellationSignal$OnCancelListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class CancellationSignal : public __jni_impl::android::os::CancellationSignal
	{
	public:
		CancellationSignal(QAndroidJniObject obj) { __thiz = obj; }
		CancellationSignal()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_CANCELLATIONSIGNAL

