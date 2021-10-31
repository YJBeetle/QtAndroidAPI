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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertPathValidatorSpi(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CertPathValidatorSpi(QAndroidJniObject obj);
		
		// Constructors
		CertPathValidatorSpi();
		
		// Methods
		__JniBaseClass engineGetRevocationChecker();
		__JniBaseClass engineValidate(java::security::cert::CertPath arg0, __JniBaseClass arg1);
	};
} // namespace java::security::cert

