#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"
#include "./KeyException.hpp"


namespace java::security
{
	class KeyManagementException : public java::security::KeyException
	{
	public:
		// Fields
		
		KeyManagementException(QAndroidJniObject obj);
		// Constructors
		KeyManagementException();
		KeyManagementException(jstring arg0);
		KeyManagementException(jthrowable arg0);
		KeyManagementException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::security

