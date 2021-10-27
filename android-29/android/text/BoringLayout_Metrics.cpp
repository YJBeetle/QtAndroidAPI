#include "./BoringLayout_Metrics.hpp"

namespace android::text
{
	// Fields
	jint BoringLayout_Metrics::width()
	{
		return __thiz.getField<jint>(
			"width"
		);
	}
	
	BoringLayout_Metrics::BoringLayout_Metrics(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BoringLayout_Metrics::BoringLayout_Metrics()
	{
		__thiz = QAndroidJniObject(
			"android.text.BoringLayout$Metrics",
			"()V"
		);
	}
	
	// Methods
	jstring BoringLayout_Metrics::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::text

