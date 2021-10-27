#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"


namespace java::lang
{
	class IllegalStateException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		IllegalStateException(QAndroidJniObject obj);
		// Constructors
		IllegalStateException();
		IllegalStateException(jstring &arg0);
		IllegalStateException(const QString &arg0);
		IllegalStateException(jthrowable &arg0);
		IllegalStateException(jstring &arg0, jthrowable &arg1);
		IllegalStateException(const QString &arg0, jthrowable &arg1);
		
		// Methods
	};
} // namespace java::lang

