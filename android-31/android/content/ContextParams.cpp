#include "./AttributionSource.hpp"
#include "../../JString.hpp"
#include "./ContextParams.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	ContextParams::ContextParams(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString ContextParams::getAttributionTag()
	{
		return callObjectMethod(
			"getAttributionTag",
			"()Ljava/lang/String;"
		);
	}
	android::content::AttributionSource ContextParams::getNextAttributionSource()
	{
		return callObjectMethod(
			"getNextAttributionSource",
			"()Landroid/content/AttributionSource;"
		);
	}
} // namespace android::content

