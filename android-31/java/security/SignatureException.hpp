#pragma once

#include "./GeneralSecurityException.hpp"

class JString;
class JThrowable;

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
		SignatureException(JString arg0);
		SignatureException(JThrowable arg0);
		SignatureException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::security

