#pragma once

#include "./GeneralSecurityException.def.hpp"

class JString;
class JThrowable;

namespace java::security
{
	class SignatureException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SignatureException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		SignatureException(QJniObject obj) : java::security::GeneralSecurityException(obj) {}
		
		// Constructors
		SignatureException();
		SignatureException(JString arg0);
		SignatureException(JThrowable arg0);
		SignatureException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::security

