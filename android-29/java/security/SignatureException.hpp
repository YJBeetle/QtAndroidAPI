#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"


namespace java::security
{
	class SignatureException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		SignatureException(QAndroidJniObject obj);
		// Constructors
		SignatureException();
		SignatureException(jstring arg0);
		SignatureException(jthrowable arg0);
		SignatureException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::security

