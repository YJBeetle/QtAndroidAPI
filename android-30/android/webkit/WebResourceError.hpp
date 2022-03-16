#pragma once

#include "../../JString.hpp"
#include "./WebResourceError.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString WebResourceError::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint WebResourceError::getErrorCode() const
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
} // namespace android::webkit

// Base class headers

