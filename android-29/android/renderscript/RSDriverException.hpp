#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "./RSRuntimeException.hpp"


namespace android::renderscript
{
	class RSDriverException : public android::renderscript::RSRuntimeException
	{
	public:
		// Fields
		
		RSDriverException(QAndroidJniObject obj);
		// Constructors
		RSDriverException(jstring arg0);
		RSDriverException() = default;
		
		// Methods
	};
} // namespace android::renderscript

