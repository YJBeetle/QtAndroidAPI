#include "./TelephonyManager_NetworkSlicingException.hpp"

namespace android::telephony
{
	// Fields
	
	// QAndroidJniObject forward
	TelephonyManager_NetworkSlicingException::TelephonyManager_NetworkSlicingException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	
	// Methods
	jstring TelephonyManager_NetworkSlicingException::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::telephony

