#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::os
{
	class NetworkOnMainThreadException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		NetworkOnMainThreadException(QAndroidJniObject obj);
		// Constructors
		NetworkOnMainThreadException();
		
		// Methods
	};
} // namespace android::os

