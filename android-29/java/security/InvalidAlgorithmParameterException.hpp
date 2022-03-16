#pragma once

#include "./GeneralSecurityException.hpp"

class JString;
class JThrowable;

namespace java::security
{
	class InvalidAlgorithmParameterException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InvalidAlgorithmParameterException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidAlgorithmParameterException(QAndroidJniObject obj) : java::security::GeneralSecurityException(obj) {}
		
		// Constructors
		InvalidAlgorithmParameterException();
		InvalidAlgorithmParameterException(JString arg0);
		InvalidAlgorithmParameterException(JThrowable arg0);
		InvalidAlgorithmParameterException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::security

