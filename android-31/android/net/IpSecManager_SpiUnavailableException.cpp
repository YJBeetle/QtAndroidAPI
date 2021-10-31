#include "./IpSecManager_SpiUnavailableException.hpp"

namespace android::net
{
	// Fields
	
	// QAndroidJniObject forward
	IpSecManager_SpiUnavailableException::IpSecManager_SpiUnavailableException(QAndroidJniObject obj) : android::util::AndroidException(obj) {}
	
	// Constructors
	
	// Methods
	jint IpSecManager_SpiUnavailableException::getSpi()
	{
		return callMethod<jint>(
			"getSpi",
			"()I"
		);
	}
} // namespace android::net

