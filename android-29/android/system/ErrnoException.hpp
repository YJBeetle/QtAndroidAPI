#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"


namespace android::system
{
	class ErrnoException : public java::lang::Exception
	{
	public:
		// Fields
		jint errno();
		
		ErrnoException(QAndroidJniObject obj);
		// Constructors
		ErrnoException(jstring &arg0, jint &arg1);
		ErrnoException(const QString &arg0, jint &arg1);
		ErrnoException(jstring &arg0, jint &arg1, jthrowable &arg2);
		ErrnoException(const QString &arg0, jint &arg1, jthrowable &arg2);
		ErrnoException() = default;
		
		// Methods
		jstring getMessage();
	};
} // namespace android::system

