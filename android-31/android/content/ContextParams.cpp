#include "./AttributionSource.hpp"
#include "./ContextParams.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	ContextParams::ContextParams(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring ContextParams::getAttributionTag()
	{
		return callObjectMethod(
			"getAttributionTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::content::AttributionSource ContextParams::getNextAttributionSource()
	{
		return callObjectMethod(
			"getNextAttributionSource",
			"()Landroid/content/AttributionSource;"
		);
	}
} // namespace android::content

