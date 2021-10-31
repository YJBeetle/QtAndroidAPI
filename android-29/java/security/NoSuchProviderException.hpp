#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"


namespace java::security
{
	class NoSuchProviderException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		NoSuchProviderException(QAndroidJniObject obj);
		// Constructors
		NoSuchProviderException();
		NoSuchProviderException(jstring arg0);
		
		// Methods
	};
} // namespace java::security

