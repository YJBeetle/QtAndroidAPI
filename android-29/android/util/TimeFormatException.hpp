#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::util
{
	class TimeFormatException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		TimeFormatException(QAndroidJniObject obj);
		// Constructors
		TimeFormatException() = default;
		
		// Methods
	};
} // namespace android::util

