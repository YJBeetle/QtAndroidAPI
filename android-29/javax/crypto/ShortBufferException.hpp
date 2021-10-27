#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/security/GeneralSecurityException.hpp"


namespace javax::crypto
{
	class ShortBufferException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		ShortBufferException(QAndroidJniObject obj);
		// Constructors
		ShortBufferException();
		ShortBufferException(jstring &arg0);
		ShortBufferException(const QString &arg0);
		
		// Methods
	};
} // namespace javax::crypto

