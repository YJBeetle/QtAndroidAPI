#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/security/GeneralSecurityException.hpp"


namespace javax::crypto
{
	class BadPaddingException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		BadPaddingException(QAndroidJniObject obj);
		// Constructors
		BadPaddingException();
		BadPaddingException(jstring &arg0);
		BadPaddingException(const QString &arg0);
		
		// Methods
	};
} // namespace javax::crypto

