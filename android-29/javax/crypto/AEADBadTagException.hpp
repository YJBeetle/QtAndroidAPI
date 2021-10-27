#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/security/GeneralSecurityException.hpp"
#include "./BadPaddingException.hpp"


namespace javax::crypto
{
	class AEADBadTagException : public javax::crypto::BadPaddingException
	{
	public:
		// Fields
		
		AEADBadTagException(QAndroidJniObject obj);
		// Constructors
		AEADBadTagException();
		AEADBadTagException(jstring &arg0);
		AEADBadTagException(const QString &arg0);
		
		// Methods
	};
} // namespace javax::crypto

