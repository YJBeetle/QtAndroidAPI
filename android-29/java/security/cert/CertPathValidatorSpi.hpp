#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::security::cert
{
	class CertPath;
}

namespace java::security::cert
{
	class CertPathValidatorSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		CertPathValidatorSpi(QAndroidJniObject obj);
		// Constructors
		CertPathValidatorSpi();
		
		// Methods
		QAndroidJniObject engineGetRevocationChecker();
		QAndroidJniObject engineValidate(java::security::cert::CertPath arg0, __JniBaseClass arg1);
	};
} // namespace java::security::cert

