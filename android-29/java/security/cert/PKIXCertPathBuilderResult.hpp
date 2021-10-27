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
		
		PKIXCertPathBuilderResult(QAndroidJniObject obj);
		// Constructors
		PKIXCertPathBuilderResult(java::security::cert::CertPath &arg0, java::security::cert::TrustAnchor &arg1, __JniBaseClass &arg2, __JniBaseClass &arg3);
		PKIXCertPathBuilderResult() = default;
		
		// Methods
		QAndroidJniObject getCertPath();
		jstring toString();
	};
} // namespace java::security::cert

