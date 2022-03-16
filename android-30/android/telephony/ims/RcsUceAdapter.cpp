#include "./RcsUceAdapter.hpp"

namespace android::telephony::ims
{
	// Fields
	
	// Constructors
	
	// Methods
	jboolean RcsUceAdapter::isUceSettingEnabled() const
	{
		return callMethod<jboolean>(
			"isUceSettingEnabled",
			"()Z"
		);
	}
} // namespace android::telephony::ims

