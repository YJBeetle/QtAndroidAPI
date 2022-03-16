#include "../../JString.hpp"
#include "./IpSecManager_SpiUnavailableException.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	
	// Methods
	jint IpSecManager_SpiUnavailableException::getSpi() const
	{
		return callMethod<jint>(
			"getSpi",
			"()I"
		);
	}
} // namespace android::net

