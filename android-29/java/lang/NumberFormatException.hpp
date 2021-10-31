#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"
#include "./IllegalArgumentException.hpp"


namespace java::lang
{
	class NumberFormatException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		NumberFormatException(QAndroidJniObject obj);
		// Constructors
		NumberFormatException();
		NumberFormatException(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

