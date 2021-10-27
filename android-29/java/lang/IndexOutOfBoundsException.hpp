#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"


namespace java::lang
{
	class IndexOutOfBoundsException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		IndexOutOfBoundsException(QAndroidJniObject obj);
		// Constructors
		IndexOutOfBoundsException();
		IndexOutOfBoundsException(jint &arg0);
		IndexOutOfBoundsException(jstring &arg0);
		IndexOutOfBoundsException(const QString &arg0);
		IndexOutOfBoundsException(jlong &arg0);
		
		// Methods
	};
} // namespace java::lang

