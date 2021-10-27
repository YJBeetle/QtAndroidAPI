#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./ReflectiveOperationException.hpp"


namespace java::lang
{
	class NoSuchFieldException : public java::lang::ReflectiveOperationException
	{
	public:
		// Fields
		
		NoSuchFieldException(QAndroidJniObject obj);
		// Constructors
		NoSuchFieldException();
		NoSuchFieldException(jstring &arg0);
		NoSuchFieldException(const QString &arg0);
		
		// Methods
	};
} // namespace java::lang

