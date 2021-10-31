#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"


namespace java::lang
{
	class SecurityException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		SecurityException(QAndroidJniObject obj);
		// Constructors
		SecurityException();
		SecurityException(jstring arg0);
		SecurityException(jthrowable arg0);
		SecurityException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::lang

