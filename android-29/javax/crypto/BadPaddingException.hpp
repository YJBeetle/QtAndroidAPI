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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BadPaddingException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		BadPaddingException(QAndroidJniObject obj);
		
		// Constructors
		BadPaddingException();
		BadPaddingException(jstring arg0);
		
		// Methods
	};
} // namespace javax::crypto

