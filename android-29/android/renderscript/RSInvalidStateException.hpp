#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "./RSRuntimeException.hpp"


namespace android::renderscript
{
	class RSInvalidStateException : public android::renderscript::RSRuntimeException
	{
	public:
		// Fields
		
		RSInvalidStateException(QAndroidJniObject obj);
		// Constructors
		RSInvalidStateException(jstring arg0);
		RSInvalidStateException() = default;
		
		// Methods
	};
} // namespace android::renderscript

