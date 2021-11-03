#include "./TelephonyCallback.hpp"

namespace android::telephony
{
	// Fields
	
	// QJniObject forward
	TelephonyCallback::TelephonyCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TelephonyCallback::TelephonyCallback()
		: JObject(
			"android.telephony.TelephonyCallback",
			"()V"
		) {}
	
	// Methods
} // namespace android::telephony

