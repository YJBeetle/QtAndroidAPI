#include "./GnssCapabilities.hpp"

namespace android::location
{
	// Fields
	
	// QJniObject forward
	GnssCapabilities::GnssCapabilities(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean GnssCapabilities::hasGnssAntennaInfo()
	{
		return callMethod<jboolean>(
			"hasGnssAntennaInfo",
			"()Z"
		);
	}
} // namespace android::location

