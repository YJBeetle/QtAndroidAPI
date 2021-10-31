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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PKIXCertPathValidatorResult(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PKIXCertPathValidatorResult(QAndroidJniObject obj);
		
		// Constructors
		PKIXCertPathValidatorResult(java::security::cert::TrustAnchor arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		
		// Methods
		jobject clone();
		__JniBaseClass getPolicyTree();
		__JniBaseClass getPublicKey();
		java::security::cert::TrustAnchor getTrustAnchor();
		jstring toString();
	};
} // namespace java::security::cert

