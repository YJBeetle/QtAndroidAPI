#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"


namespace java::security
{
	class KeyException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		KeyException(QAndroidJniObject obj);
		// Constructors
		KeyException();
		KeyException(jstring arg0);
		KeyException(jthrowable arg0);
		KeyException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::security

