#pragma once

#include "../../../JObject.hpp"

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
	class PKIXParameters : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PKIXParameters(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PKIXParameters(QJniObject obj);
		
		// Constructors
		PKIXParameters(java::security::KeyStore arg0);
		PKIXParameters(JObject arg0);
		
		// Methods
		void addCertPathChecker(java::security::cert::PKIXCertPathChecker arg0);
		void addCertStore(java::security::cert::CertStore arg0);
		jobject clone();
		JObject getCertPathCheckers();
		JObject getCertStores();
		java::util::Date getDate();
		JObject getInitialPolicies();
		jboolean getPolicyQualifiersRejected();
		jstring getSigProvider();
		JObject getTargetCertConstraints();
		JObject getTrustAnchors();
		jboolean isAnyPolicyInhibited();
		jboolean isExplicitPolicyRequired();
		jboolean isPolicyMappingInhibited();
		jboolean isRevocationEnabled();
		void setAnyPolicyInhibited(jboolean arg0);
		void setCertPathCheckers(JObject arg0);
		void setCertStores(JObject arg0);
		void setDate(java::util::Date arg0);
		void setExplicitPolicyRequired(jboolean arg0);
		void setInitialPolicies(JObject arg0);
		void setPolicyMappingInhibited(jboolean arg0);
		void setPolicyQualifiersRejected(jboolean arg0);
		void setRevocationEnabled(jboolean arg0);
		void setSigProvider(jstring arg0);
		void setTargetCertConstraints(JObject arg0);
		void setTrustAnchors(JObject arg0);
		jstring toString();
	};
} // namespace java::security::cert

