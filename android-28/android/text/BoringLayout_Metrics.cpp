#include "../../JString.hpp"
#include "./BoringLayout_Metrics.hpp"

namespace android::text
{
	// Fields
	jint BoringLayout_Metrics::width()
	{
		return getField<jint>(
			"width"
		);
	}
	
	// Constructors
	BoringLayout_Metrics::BoringLayout_Metrics()
		: android::graphics::Paint_FontMetricsInt(
			"android.text.BoringLayout$Metrics",
			"()V"
		) {}
	
	// Methods
	JString BoringLayout_Metrics::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::text

