#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"
#include "./IllegalArgumentException.hpp"


namespace java::lang
{
	class IllegalThreadStateException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		IllegalThreadStateException(QAndroidJniObject obj);
		// Constructors
		IllegalThreadStateException();
		IllegalThreadStateException(jstring &arg0);
		IllegalThreadStateException(const QString &arg0);
		
		// Methods
	};
} // namespace java::lang

