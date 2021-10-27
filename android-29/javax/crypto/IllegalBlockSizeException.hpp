#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/security/GeneralSecurityException.hpp"


namespace javax::crypto
{
	class IllegalBlockSizeException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		IllegalBlockSizeException(QAndroidJniObject obj);
		// Constructors
		IllegalBlockSizeException();
		IllegalBlockSizeException(jstring &arg0);
		IllegalBlockSizeException(const QString &arg0);
		
		// Methods
	};
} // namespace javax::crypto

