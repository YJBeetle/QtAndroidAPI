#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::os
{
	class UserManager_UserOperationException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		UserManager_UserOperationException(QAndroidJniObject obj);
		// Constructors
		UserManager_UserOperationException() = default;
		
		// Methods
		jint getUserOperationResult();
	};
} // namespace android::os

