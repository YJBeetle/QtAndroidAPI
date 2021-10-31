#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::security
{
	class KeyStore;
}
namespace java::security::cert
{
	class CertStore;
}
namespace java::security::cert
{
	class PKIXCertPathChecker;
}
namespace java::util
{
	class Date;
}

namespace java::security::cert
{
	class PKIXParameters : public __JniBaseClass
	{
	public:
		// Fields
		
		PKIXParameters(QAndroidJniObject obj);
		// Constructors
		PKIXParameters(java::security::KeyStore arg0);
		PKIXParameters(__JniBaseClass arg0);
		PKIXParameters() = default;
		
		// Methods
		void addCertPathChecker(java::security::cert::PKIXCertPathChecker arg0);
		void addCertStore(java::security::cert::CertStore arg0);
		jobject clone();
		QAndroidJniObject getCertPathCheckers();
		QAndroidJniObject getCertStores();
		QAndroidJniObject getDate();
		QAndroidJniObject getInitialPolicies();
		jboolean getPolicyQualifiersRejected();
		jstring getSigProvider();
		QAndroidJniObject getTargetCertConstraints();
		QAndroidJniObject getTrustAnchors();
		jboolean isAnyPolicyInhibited();
		jboolean isExplicitPolicyRequired();
		jboolean isPolicyMappingInhibited();
		jboolean isRevocationEnabled();
		void setAnyPolicyInhibited(jboolean arg0);
		void setCertPathCheckers(__JniBaseClass arg0);
		void setCertStores(__JniBaseClass arg0);
		void setDate(java::util::Date arg0);
		void setExplicitPolicyRequired(jboolean arg0);
		void setInitialPolicies(__JniBaseClass arg0);
		void setPolicyMappingInhibited(jboolean arg0);
		void setPolicyQualifiersRejected(jboolean arg0);
		void setRevocationEnabled(jboolean arg0);
		void setSigProvider(jstring arg0);
		void setTargetCertConstraints(__JniBaseClass arg0);
		void setTrustAnchors(__JniBaseClass arg0);
		jstring toString();
	};
} // namespace java::security::cert

