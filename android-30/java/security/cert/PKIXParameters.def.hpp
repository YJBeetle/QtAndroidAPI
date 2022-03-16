#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;
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
		PKIXParameters(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PKIXParameters(java::security::KeyStore arg0);
		PKIXParameters(JObject arg0);
		
		// Methods
		void addCertPathChecker(java::security::cert::PKIXCertPathChecker arg0) const;
		void addCertStore(java::security::cert::CertStore arg0) const;
		JObject clone() const;
		JObject getCertPathCheckers() const;
		JObject getCertStores() const;
		java::util::Date getDate() const;
		JObject getInitialPolicies() const;
		jboolean getPolicyQualifiersRejected() const;
		JString getSigProvider() const;
		JObject getTargetCertConstraints() const;
		JObject getTrustAnchors() const;
		jboolean isAnyPolicyInhibited() const;
		jboolean isExplicitPolicyRequired() const;
		jboolean isPolicyMappingInhibited() const;
		jboolean isRevocationEnabled() const;
		void setAnyPolicyInhibited(jboolean arg0) const;
		void setCertPathCheckers(JObject arg0) const;
		void setCertStores(JObject arg0) const;
		void setDate(java::util::Date arg0) const;
		void setExplicitPolicyRequired(jboolean arg0) const;
		void setInitialPolicies(JObject arg0) const;
		void setPolicyMappingInhibited(jboolean arg0) const;
		void setPolicyQualifiersRejected(jboolean arg0) const;
		void setRevocationEnabled(jboolean arg0) const;
		void setSigProvider(JString arg0) const;
		void setTargetCertConstraints(JObject arg0) const;
		void setTrustAnchors(JObject arg0) const;
		JString toString() const;
	};
} // namespace java::security::cert

