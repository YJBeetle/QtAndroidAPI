#pragma once

#include "../GeneralSecurityException.def.hpp"

class JString;
class JThrowable;

namespace java::security::spec
{
	class InvalidKeySpecException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InvalidKeySpecException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidKeySpecException(QAndroidJniObject obj) : java::security::GeneralSecurityException(obj) {}
		
		// Constructors
		InvalidKeySpecException();
		InvalidKeySpecException(JString arg0);
		InvalidKeySpecException(JThrowable arg0);
		InvalidKeySpecException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::security::spec

