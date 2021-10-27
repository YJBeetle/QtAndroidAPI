#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"
#include "./IndexOutOfBoundsException.hpp"


namespace java::lang
{
	class StringIndexOutOfBoundsException : public java::lang::IndexOutOfBoundsException
	{
	public:
		// Fields
		
		StringIndexOutOfBoundsException(QAndroidJniObject obj);
		// Constructors
		StringIndexOutOfBoundsException();
		StringIndexOutOfBoundsException(jint &arg0);
		StringIndexOutOfBoundsException(jstring &arg0);
		StringIndexOutOfBoundsException(const QString &arg0);
		
		// Methods
	};
} // namespace java::lang

