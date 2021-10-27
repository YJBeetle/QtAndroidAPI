#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"


namespace java::lang
{
	class ArithmeticException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		ArithmeticException(QAndroidJniObject obj);
		// Constructors
		ArithmeticException();
		ArithmeticException(jstring &arg0);
		ArithmeticException(const QString &arg0);
		
		// Methods
	};
} // namespace java::lang

