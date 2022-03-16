#pragma once

#include "../../content/IntentSender.def.hpp"
#include "../../../JString.hpp"
#include "./SaveCallback.def.hpp"

namespace android::service::autofill
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void SaveCallback::onFailure(JString arg0) const
	{
		callMethod<void>(
			"onFailure",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void SaveCallback::onSuccess() const
	{
		callMethod<void>(
			"onSuccess",
			"()V"
		);
	}
	inline void SaveCallback::onSuccess(android::content::IntentSender arg0) const
	{
		callMethod<void>(
			"onSuccess",
			"(Landroid/content/IntentSender;)V",
			arg0.object()
		);
	}
} // namespace android::service::autofill

// Base class headers

