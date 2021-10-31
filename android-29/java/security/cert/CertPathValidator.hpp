#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::security
{
	class Provider;
}
namespace java::security::cert
{
	class CertPath;
}
namespace java::security::cert
{
	class CertPathValidatorSpi;
}

namespace java::security::cert
{
	class CertPathValidator : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertPathValidator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CertPathValidator(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring getDefaultType();
		static java::security::cert::CertPathValidator getInstance(jstring arg0);
		static java::security::cert::CertPathValidator getInstance(jstring arg0, jstring arg1);
		static java::security::cert::CertPathValidator getInstance(jstring arg0, java::security::Provider arg1);
		jstring getAlgorithm();
		java::security::Provider getProvider();
		__JniBaseClass getRevocationChecker();
		__JniBaseClass validate(java::security::cert::CertPath arg0, __JniBaseClass arg1);
	};
} // namespace java::security::cert

