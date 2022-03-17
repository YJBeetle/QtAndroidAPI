#pragma once

#include "./AttributionSource.def.hpp"
#include "../../JString.hpp"
#include "./ContextParams.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString ContextParams::getAttributionTag() const
	{
		return callObjectMethod(
			"getAttributionTag",
			"()Ljava/lang/String;"
		);
	}
	inline android::content::AttributionSource ContextParams::getNextAttributionSource() const
	{
		return callObjectMethod(
			"getNextAttributionSource",
			"()Landroid/content/AttributionSource;"
		);
	}
} // namespace android::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
