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
		
		// QJniObject forward
		template<typename ...Ts> explicit PKIXParameters(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PKIXParameters(QJniObject obj);
		
		// Constructors
		PKIXParameters(java::security::KeyStore arg0);
		PKIXParameters(__JniBaseClass arg0);
		
		// Methods
		void addCertPathChecker(java::security::cert::PKIXCertPathChecker arg0);
		void addCertStore(java::security::cert::CertStore arg0);
		jobject clone();
		__JniBaseClass getCertPathCheckers();
		__JniBaseClass getCertStores();
		java::util::Date getDate();
		__JniBaseClass getInitialPolicies();
		jboolean getPolicyQualifiersRejected();
		jstring getSigProvider();
		__JniBaseClass getTargetCertConstraints();
		__JniBaseClass getTrustAnchors();
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

