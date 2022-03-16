#pragma once

#include "../../java/lang/RuntimeException.hpp"

namespace android::companion
{
	class DeviceNotAssociatedException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DeviceNotAssociatedException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		DeviceNotAssociatedException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::companion

