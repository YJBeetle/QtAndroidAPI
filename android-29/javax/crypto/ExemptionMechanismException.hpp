#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/security/GeneralSecurityException.hpp"


namespace javax::crypto
{
	class ExemptionMechanismException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		ExemptionMechanismException(QAndroidJniObject obj);
		// Constructors
		ExemptionMechanismException();
		ExemptionMechanismException(jstring &arg0);
		ExemptionMechanismException(const QString &arg0);
		
		// Methods
	};
} // namespace javax::crypto

