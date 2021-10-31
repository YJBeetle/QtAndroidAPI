#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::os
{
	class FileUriExposedException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		FileUriExposedException(QAndroidJniObject obj);
		// Constructors
		FileUriExposedException(jstring arg0);
		FileUriExposedException() = default;
		
		// Methods
	};
} // namespace android::os

