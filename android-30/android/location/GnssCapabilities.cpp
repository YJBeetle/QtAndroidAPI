#include "./GnssCapabilities.hpp"

namespace android::location
{
	// Fields
	
	// QAndroidJniObject forward
	GnssCapabilities::GnssCapabilities(QAndroidJniObject obj) : JObject(obj) {}
	
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

