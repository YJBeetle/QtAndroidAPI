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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkOnMainThreadException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		NetworkOnMainThreadException(QAndroidJniObject obj);
		
		// Constructors
		NetworkOnMainThreadException();
		
		// Methods
	};
} // namespace android::os

