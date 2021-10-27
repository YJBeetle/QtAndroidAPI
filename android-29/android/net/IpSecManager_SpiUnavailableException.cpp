#include "./IpSecManager_SpiUnavailableException.hpp"

namespace android::net
{
	// Fields
	
	IpSecManager_SpiUnavailableException::IpSecManager_SpiUnavailableException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint IpSecManager_SpiUnavailableException::getSpi()
	{
		return __thiz.callMethod<jint>(
			"getSpi",
			"()I"
		);
	}
} // namespace android::net

