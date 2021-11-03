#include "./TelephonyCallback.hpp"

namespace android::telephony
{
	// Fields
	
	// QAndroidJniObject forward
	TelephonyCallback::TelephonyCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TelephonyCallback::TelephonyCallback()
		: JObject(
			"android.telephony.TelephonyCallback",
			"()V"
		) {}
	
	// Methods
} // namespace android::telephony

