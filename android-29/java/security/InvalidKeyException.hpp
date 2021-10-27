#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"
#include "./KeyException.hpp"


namespace java::security
{
	class InvalidKeyException : public java::security::KeyException
	{
	public:
		// Fields
		
		InvalidKeyException(QAndroidJniObject obj);
		// Constructors
		InvalidKeyException();
		InvalidKeyException(jstring &arg0);
		InvalidKeyException(const QString &arg0);
		InvalidKeyException(jthrowable &arg0);
		InvalidKeyException(jstring &arg0, jthrowable &arg1);
		InvalidKeyException(const QString &arg0, jthrowable &arg1);
		
		// Methods
	};
} // namespace java::security

