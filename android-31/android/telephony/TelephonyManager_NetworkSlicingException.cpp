#include "../../JString.hpp"
#include "./TelephonyManager_NetworkSlicingException.hpp"

namespace android::telephony
{
	// Fields
	
	// QAndroidJniObject forward
	TelephonyManager_NetworkSlicingException::TelephonyManager_NetworkSlicingException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	
	// Methods
	JString TelephonyManager_NetworkSlicingException::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::telephony

