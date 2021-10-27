#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"


namespace android::net
{
	class IpSecManager_SpiUnavailableException : public android::util::AndroidException
	{
	public:
		// Fields
		
		IpSecManager_SpiUnavailableException(QAndroidJniObject obj);
		// Constructors
		IpSecManager_SpiUnavailableException() = default;
		
		// Methods
		jint getSpi();
	};
} // namespace android::net

