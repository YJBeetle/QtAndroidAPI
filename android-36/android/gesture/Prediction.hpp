#pragma once

#include "../../JString.hpp"
#include "./Prediction.def.hpp"

namespace android::gesture
{
	// Fields
	inline JString Prediction::name()
	{
		return getObjectField(
			"name",
			"Ljava/lang/String;"
		);
	}
	inline jdouble Prediction::score()
	{
		return getField<jdouble>(
			"score"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString Prediction::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::gesture

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::gesture;
#endif
