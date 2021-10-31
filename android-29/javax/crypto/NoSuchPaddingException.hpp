#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/security/GeneralSecurityException.hpp"


namespace javax::crypto
{
	class NoSuchPaddingException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		NoSuchPaddingException(QAndroidJniObject obj);
		// Constructors
		NoSuchPaddingException();
		NoSuchPaddingException(jstring arg0);
		
		// Methods
	};
} // namespace javax::crypto

