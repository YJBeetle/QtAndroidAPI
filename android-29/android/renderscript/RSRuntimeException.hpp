#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::renderscript
{
	class RSRuntimeException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		RSRuntimeException(QAndroidJniObject obj);
		// Constructors
		RSRuntimeException(jstring &arg0);
		RSRuntimeException(const QString &arg0);
		RSRuntimeException() = default;
		
		// Methods
	};
} // namespace android::renderscript

