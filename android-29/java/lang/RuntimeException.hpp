#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"


namespace java::lang
{
	class RuntimeException : public java::lang::Exception
	{
	public:
		// Fields
		
		RuntimeException(QAndroidJniObject obj);
		// Constructors
		RuntimeException();
		RuntimeException(jstring &arg0);
		RuntimeException(const QString &arg0);
		RuntimeException(jthrowable &arg0);
		RuntimeException(jstring &arg0, jthrowable &arg1);
		RuntimeException(const QString &arg0, jthrowable &arg1);
		
		// Methods
	};
} // namespace java::lang

