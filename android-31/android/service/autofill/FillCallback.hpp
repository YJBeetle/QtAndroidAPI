#pragma once

#include "./FillResponse.def.hpp"
#include "../../../JString.hpp"
#include "./FillCallback.def.hpp"

namespace android::service::autofill
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void FillCallback::onFailure(JString arg0) const
	{
		callMethod<void>(
			"onFailure",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void FillCallback::onSuccess(android::service::autofill::FillResponse arg0) const
	{
		callMethod<void>(
			"onSuccess",
			"(Landroid/service/autofill/FillResponse;)V",
			arg0.object()
		);
	}
} // namespace android::service::autofill

// Base class headers

