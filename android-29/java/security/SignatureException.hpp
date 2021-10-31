#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"


namespace java::security
{
	class SignatureException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SignatureException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		SignatureException(QAndroidJniObject obj);
		
		// Constructors
		SignatureException();
		SignatureException(jstring arg0);
		SignatureException(jthrowable arg0);
		SignatureException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::security

