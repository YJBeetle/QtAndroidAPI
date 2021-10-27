#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"


namespace java::util
{
	class NoSuchElementException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		NoSuchElementException(QAndroidJniObject obj);
		// Constructors
		NoSuchElementException();
		NoSuchElementException(jstring &arg0);
		NoSuchElementException(const QString &arg0);
		NoSuchElementException(jthrowable &arg0);
		NoSuchElementException(jstring &arg0, jthrowable &arg1);
		NoSuchElementException(const QString &arg0, jthrowable &arg1);
		
		// Methods
	};
} // namespace java::util

