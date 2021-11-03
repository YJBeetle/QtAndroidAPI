#include "./RcsUceAdapter.hpp"

namespace android::telephony::ims
{
	// Fields
	
	// QJniObject forward
	RcsUceAdapter::RcsUceAdapter(QJniObject obj) : JObject(obj) {}
	
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

