#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"


namespace java::security
{
	class InvalidParameterException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		InvalidParameterException(QAndroidJniObject obj);
		// Constructors
		InvalidParameterException();
		InvalidParameterException(jstring &arg0);
		InvalidParameterException(const QString &arg0);
		
		// Methods
	};
} // namespace java::security

