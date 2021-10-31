#include "./TelephonyCallback.hpp"

namespace android::telephony
{
	// Fields
	
	// QJniObject forward
	TelephonyCallback::TelephonyCallback(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TelephonyCallback::TelephonyCallback()
		: __JniBaseClass(
			"android.telephony.TelephonyCallback",
			"()V"
		) {}
	
	// Methods
} // namespace android::telephony

