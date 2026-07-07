#pragma once

#include "../../../JArray.hpp"
#include "./VirtualViewFillInfo.def.hpp"

namespace android::view::autofill
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JArray VirtualViewFillInfo::getAutofillHints() const
	{
		return callObjectMethod(
			"getAutofillHints",
			"()[Ljava/lang/String;"
		);
	}
} // namespace android::view::autofill

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::autofill;
#endif
