#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"
#include "./IndexOutOfBoundsException.hpp"


namespace java::lang
{
	class ArrayIndexOutOfBoundsException : public java::lang::IndexOutOfBoundsException
	{
	public:
		// Fields
		
		ArrayIndexOutOfBoundsException(QAndroidJniObject obj);
		// Constructors
		ArrayIndexOutOfBoundsException();
		ArrayIndexOutOfBoundsException(jint arg0);
		ArrayIndexOutOfBoundsException(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

