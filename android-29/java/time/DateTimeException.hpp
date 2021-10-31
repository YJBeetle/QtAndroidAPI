#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"


namespace java::time
{
	class DateTimeException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		DateTimeException(QAndroidJniObject obj);
		// Constructors
		DateTimeException(jstring arg0);
		DateTimeException(jstring arg0, jthrowable arg1);
		DateTimeException() = default;
		
		// Methods
	};
} // namespace java::time

