#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./ReflectiveOperationException.hpp"


namespace java::lang
{
	class InstantiationException : public java::lang::ReflectiveOperationException
	{
	public:
		// Fields
		
		InstantiationException(QAndroidJniObject obj);
		// Constructors
		InstantiationException();
		InstantiationException(jstring &arg0);
		InstantiationException(const QString &arg0);
		
		// Methods
	};
} // namespace java::lang

