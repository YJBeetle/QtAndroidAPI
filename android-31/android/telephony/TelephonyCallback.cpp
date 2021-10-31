#include "./TelephonyCallback.hpp"

namespace android::telephony
{
	// Fields
	
	// QAndroidJniObject forward
	TelephonyCallback::TelephonyCallback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TelephonyCallback::TelephonyCallback()
		: __JniBaseClass(
			"android.telephony.TelephonyCallback",
			"()V"
		) {}
	
	// Methods
} // namespace android::telephony

