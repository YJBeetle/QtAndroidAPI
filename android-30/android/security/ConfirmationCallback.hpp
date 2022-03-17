#pragma once

#include "../../JByteArray.hpp"
#include "../../JThrowable.hpp"
#include "./ConfirmationCallback.def.hpp"

namespace android::security
{
	// Fields
	
	// Constructors
	inline ConfirmationCallback::ConfirmationCallback()
		: JObject(
			"android.security.ConfirmationCallback",
			"()V"
		) {}
	
	// Methods
	inline void ConfirmationCallback::onCanceled() const
	{
		callMethod<void>(
			"onCanceled",
			"()V"
		);
	}
	inline void ConfirmationCallback::onConfirmed(JByteArray arg0) const
	{
		callMethod<void>(
			"onConfirmed",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void ConfirmationCallback::onDismissed() const
	{
		callMethod<void>(
			"onDismissed",
			"()V"
		);
	}
	inline void ConfirmationCallback::onError(JThrowable arg0) const
	{
		callMethod<void>(
			"onError",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		);
	}
} // namespace android::security

// Base class headers

