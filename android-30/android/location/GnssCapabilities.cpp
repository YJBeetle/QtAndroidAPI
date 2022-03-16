#include "./GnssCapabilities.hpp"

namespace android::location
{
	// Fields
	
	// Constructors
	
	// Methods
	jboolean GnssCapabilities::hasGnssAntennaInfo() const
	{
		return callMethod<jboolean>(
			"hasGnssAntennaInfo",
			"()Z"
		);
	}
} // namespace android::location

