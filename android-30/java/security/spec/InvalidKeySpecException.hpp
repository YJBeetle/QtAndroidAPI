#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"


namespace java::security::spec
{
	class InvalidKeySpecException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InvalidKeySpecException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidKeySpecException(QAndroidJniObject obj);
		
		// Constructors
		InvalidKeySpecException();
		InvalidKeySpecException(jstring arg0);
		InvalidKeySpecException(jthrowable arg0);
		InvalidKeySpecException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::security::spec

