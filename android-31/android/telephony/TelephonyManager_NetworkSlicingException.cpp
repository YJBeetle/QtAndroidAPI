#include "../../JString.hpp"
#include "./TelephonyManager_NetworkSlicingException.hpp"

namespace android::telephony
{
	// Fields
	
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

