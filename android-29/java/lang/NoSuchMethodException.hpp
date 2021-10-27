#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./ReflectiveOperationException.hpp"


namespace java::lang
{
	class NoSuchMethodException : public java::lang::ReflectiveOperationException
	{
	public:
		// Fields
		
		NoSuchMethodException(QAndroidJniObject obj);
		// Constructors
		NoSuchMethodException();
		NoSuchMethodException(jstring &arg0);
		NoSuchMethodException(const QString &arg0);
		
		// Methods
	};
} // namespace java::lang

