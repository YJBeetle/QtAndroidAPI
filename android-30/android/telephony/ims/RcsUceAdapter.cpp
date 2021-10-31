#include "./RcsUceAdapter.hpp"

namespace android::telephony::ims
{
	// Fields
	
	// QAndroidJniObject forward
	RcsUceAdapter::RcsUceAdapter(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean RcsUceAdapter::isUceSettingEnabled()
	{
		return callMethod<jboolean>(
			"isUceSettingEnabled",
			"()Z"
		);
	}
} // namespace android::telephony::ims

