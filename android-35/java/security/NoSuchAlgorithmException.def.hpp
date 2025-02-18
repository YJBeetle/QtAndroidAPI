#pragma once

#include "./GeneralSecurityException.def.hpp"

class JString;
class JThrowable;

namespace java::security
{
	class NoSuchAlgorithmException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NoSuchAlgorithmException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		NoSuchAlgorithmException(QJniObject obj) : java::security::GeneralSecurityException(obj) {}
		
		// Constructors
		NoSuchAlgorithmException();
		NoSuchAlgorithmException(JString arg0);
		NoSuchAlgorithmException(JThrowable arg0);
		NoSuchAlgorithmException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::security

