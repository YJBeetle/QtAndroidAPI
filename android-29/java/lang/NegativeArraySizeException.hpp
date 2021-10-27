#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"


namespace java::lang
{
	class NegativeArraySizeException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		NegativeArraySizeException(QAndroidJniObject obj);
		// Constructors
		NegativeArraySizeException();
		NegativeArraySizeException(jstring &arg0);
		NegativeArraySizeException(const QString &arg0);
		
		// Methods
	};
} // namespace java::lang

