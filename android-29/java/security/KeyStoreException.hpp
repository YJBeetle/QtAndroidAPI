#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"


namespace java::security
{
	class KeyStoreException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		KeyStoreException(QAndroidJniObject obj);
		// Constructors
		KeyStoreException();
		KeyStoreException(jstring arg0);
		KeyStoreException(jthrowable arg0);
		KeyStoreException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::security

