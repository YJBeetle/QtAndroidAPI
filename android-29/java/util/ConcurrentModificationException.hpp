#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"


namespace java::util
{
	class ConcurrentModificationException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		ConcurrentModificationException(QAndroidJniObject obj);
		// Constructors
		ConcurrentModificationException();
		ConcurrentModificationException(jstring &arg0);
		ConcurrentModificationException(const QString &arg0);
		ConcurrentModificationException(jthrowable &arg0);
		ConcurrentModificationException(jstring &arg0, jthrowable &arg1);
		ConcurrentModificationException(const QString &arg0, jthrowable &arg1);
		
		// Methods
	};
} // namespace java::util

