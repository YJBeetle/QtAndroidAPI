#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::os
{
	class ParcelFormatException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		ParcelFormatException(QAndroidJniObject obj);
		// Constructors
		ParcelFormatException();
		ParcelFormatException(jstring arg0);
		
		// Methods
	};
} // namespace android::os

