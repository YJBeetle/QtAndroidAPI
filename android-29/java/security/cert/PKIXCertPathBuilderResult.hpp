#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./PKIXCertPathValidatorResult.hpp"

namespace java::security::cert
{
	class CertPath;
}
namespace java::security::cert
{
	class TrustAnchor;
}

namespace java::security::cert
{
	class PKIXCertPathBuilderResult : public java::security::cert::PKIXCertPathValidatorResult
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PKIXCertPathBuilderResult(const char *className, const char *sig, Ts...agv) : java::security::cert::PKIXCertPathValidatorResult(className, sig, std::forward<Ts>(agv)...) {}
		PKIXCertPathBuilderResult(QAndroidJniObject obj);
		
		// Constructors
		PKIXCertPathBuilderResult(java::security::cert::CertPath arg0, java::security::cert::TrustAnchor arg1, __JniBaseClass arg2, __JniBaseClass arg3);
		
		// Methods
		java::security::cert::CertPath getCertPath();
		jstring toString();
	};
} // namespace java::security::cert

