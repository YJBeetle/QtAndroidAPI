#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

namespace java::lang
{
	class Exception;
}

namespace android::util
{
	class AndroidRuntimeException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		AndroidRuntimeException(QAndroidJniObject obj);
		// Constructors
		AndroidRuntimeException();
		AndroidRuntimeException(java::lang::Exception &arg0);
		AndroidRuntimeException(jstring &arg0);
		AndroidRuntimeException(const QString &arg0);
		AndroidRuntimeException(jstring &arg0, jthrowable &arg1);
		AndroidRuntimeException(const QString &arg0, jthrowable &arg1);
		
		// Methods
	};
} // namespace android::util

