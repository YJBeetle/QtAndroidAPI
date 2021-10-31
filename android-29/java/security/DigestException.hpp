#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"


namespace java::security
{
	class DigestException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		DigestException(QAndroidJniObject obj);
		// Constructors
		DigestException();
		DigestException(jstring arg0);
		DigestException(jthrowable arg0);
		DigestException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::security

