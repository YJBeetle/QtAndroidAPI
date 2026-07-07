#pragma once

#include "../../../JString.hpp"
#include "./LoadParams.def.hpp"

namespace android::graphics::pdf
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString LoadParams::getPassword() const
	{
		return callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::graphics::pdf

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::pdf;
#endif
