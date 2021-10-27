#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./ReflectiveOperationException.hpp"


namespace java::lang
{
	class IllegalAccessException : public java::lang::ReflectiveOperationException
	{
	public:
		// Fields
		
		IllegalAccessException(QAndroidJniObject obj);
		// Constructors
		IllegalAccessException();
		IllegalAccessException(jstring &arg0);
		IllegalAccessException(const QString &arg0);
		
		// Methods
	};
} // namespace java::lang

