#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::companion
{
	class DeviceNotAssociatedException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DeviceNotAssociatedException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		DeviceNotAssociatedException(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::companion

