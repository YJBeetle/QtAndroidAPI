#include "./AttributionSource.hpp"
#include "../../JString.hpp"
#include "./ContextParams.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	
	// Methods
	JString ContextParams::getAttributionTag() const
	{
		return callObjectMethod(
			"getAttributionTag",
			"()Ljava/lang/String;"
		);
	}
	android::content::AttributionSource ContextParams::getNextAttributionSource() const
	{
		return callObjectMethod(
			"getNextAttributionSource",
			"()Landroid/content/AttributionSource;"
		);
	}
} // namespace android::content

