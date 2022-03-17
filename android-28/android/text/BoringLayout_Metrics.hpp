#pragma once

#include "../../JString.hpp"
#include "./BoringLayout_Metrics.def.hpp"

namespace android::text
{
	// Fields
	inline jint BoringLayout_Metrics::width()
	{
		return getField<jint>(
			"width"
		);
	}
	
	// Constructors
	inline BoringLayout_Metrics::BoringLayout_Metrics()
		: android::graphics::Paint_FontMetricsInt(
			"android.text.BoringLayout$Metrics",
			"()V"
		) {}
	
	// Methods
	inline JString BoringLayout_Metrics::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::text

// Base class headers
#include "../graphics/Paint_FontMetricsInt.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text;
#endif
