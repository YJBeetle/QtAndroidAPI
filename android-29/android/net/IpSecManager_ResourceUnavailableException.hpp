#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"


namespace android::net
{
	class IpSecManager_ResourceUnavailableException : public android::util::AndroidException
	{
	public:
		// Fields
		
		IpSecManager_ResourceUnavailableException(QAndroidJniObject obj);
		// Constructors
		IpSecManager_ResourceUnavailableException() = default;
		
		// Methods
	};
} // namespace android::net

