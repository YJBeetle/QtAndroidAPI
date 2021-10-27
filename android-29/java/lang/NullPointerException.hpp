#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"


namespace java::lang
{
	class NullPointerException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		NullPointerException(QAndroidJniObject obj);
		// Constructors
		NullPointerException();
		NullPointerException(jstring &arg0);
		NullPointerException(const QString &arg0);
		
		// Methods
		jthrowable fillInStackTrace();
		jstring getMessage();
	};
} // namespace java::lang

