#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "./RSRuntimeException.hpp"


namespace android::renderscript
{
	class RSIllegalArgumentException : public android::renderscript::RSRuntimeException
	{
	public:
		// Fields
		
		RSIllegalArgumentException(QAndroidJniObject obj);
		// Constructors
		RSIllegalArgumentException(jstring arg0);
		RSIllegalArgumentException() = default;
		
		// Methods
	};
} // namespace android::renderscript

