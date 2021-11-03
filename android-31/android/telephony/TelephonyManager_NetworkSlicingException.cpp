#include "../../JString.hpp"
#include "./TelephonyManager_NetworkSlicingException.hpp"

namespace android::telephony
{
	// Fields
	
	// QJniObject forward
	TelephonyManager_NetworkSlicingException::TelephonyManager_NetworkSlicingException(QJniObject obj) : java::lang::Exception(obj) {}
	
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

