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
	
	// QJniObject forward
	BoringLayout_Metrics::BoringLayout_Metrics(QJniObject obj) : android::graphics::Paint_FontMetricsInt(obj) {}
	
	// Constructors
	BoringLayout_Metrics::BoringLayout_Metrics()
		: android::graphics::Paint_FontMetricsInt(
			"android.text.BoringLayout$Metrics",
			"()V"
		) {}
	
	// Methods
	jstring BoringLayout_Metrics::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::text

