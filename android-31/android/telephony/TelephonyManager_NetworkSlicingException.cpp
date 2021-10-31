#include "./TelephonyManager_NetworkSlicingException.hpp"

namespace android::telephony
{
	// Fields
	
	// QJniObject forward
	TelephonyManager_NetworkSlicingException::TelephonyManager_NetworkSlicingException(QJniObject obj) : java::lang::Exception(obj) {}
	
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

