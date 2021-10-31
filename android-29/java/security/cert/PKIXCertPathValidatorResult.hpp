#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::security::cert
{
	class TrustAnchor;
}

namespace java::security::cert
{
	class PKIXCertPathValidatorResult : public __JniBaseClass
	{
	public:
		// Fields
		
		PKIXCertPathValidatorResult(QAndroidJniObject obj);
		// Constructors
		PKIXCertPathValidatorResult(java::security::cert::TrustAnchor arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		PKIXCertPathValidatorResult() = default;
		
		// Methods
		jobject clone();
		QAndroidJniObject getPolicyTree();
		QAndroidJniObject getPublicKey();
		QAndroidJniObject getTrustAnchor();
		jstring toString();
	};
} // namespace java::security::cert

