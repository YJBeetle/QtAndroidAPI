#pragma once

#include "./CancellationSignal.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline CancellationSignal::CancellationSignal()
		: JObject(
			"android.os.CancellationSignal",
			"()V"
		) {}
	
	// Methods
	inline void CancellationSignal::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline jboolean CancellationSignal::isCanceled() const
	{
		return callMethod<jboolean>(
			"isCanceled",
			"()Z"
		);
	}
	inline void CancellationSignal::setOnCancelListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnCancelListener",
			"(Landroid/os/CancellationSignal$OnCancelListener;)V",
			arg0.object()
		);
	}
	inline void CancellationSignal::throwIfCanceled() const
	{
		callMethod<void>(
			"throwIfCanceled",
			"()V"
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
