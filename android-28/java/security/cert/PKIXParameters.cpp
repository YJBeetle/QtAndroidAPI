#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../KeyStore.hpp"
#include "./CertStore.hpp"
#include "./PKIXCertPathChecker.hpp"
#include "../../util/Date.hpp"
#include "./PKIXParameters.hpp"

namespace java::security::cert
{
	// Fields
	
	// QJniObject forward
	PKIXParameters::PKIXParameters(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PKIXParameters::PKIXParameters(java::security::KeyStore arg0)
		: JObject(
			"java.security.cert.PKIXParameters",
			"(Ljava/security/KeyStore;)V",
			arg0.object()
		) {}
	PKIXParameters::PKIXParameters(JObject arg0)
		: JObject(
			"java.security.cert.PKIXParameters",
			"(Ljava/util/Set;)V",
			arg0.object()
		) {}
	
	// Methods
	void PKIXParameters::addCertPathChecker(java::security::cert::PKIXCertPathChecker arg0) const
	{
		callMethod<void>(
			"addCertPathChecker",
			"(Ljava/security/cert/PKIXCertPathChecker;)V",
			arg0.object()
		);
	}
	void PKIXParameters::addCertStore(java::security::cert::CertStore arg0) const
	{
		callMethod<void>(
			"addCertStore",
			"(Ljava/security/cert/CertStore;)V",
			arg0.object()
		);
	}
	JObject PKIXParameters::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	JObject PKIXParameters::getCertPathCheckers() const
	{
		return callObjectMethod(
			"getCertPathCheckers",
			"()Ljava/util/List;"
		);
	}
	JObject PKIXParameters::getCertStores() const
	{
		return callObjectMethod(
			"getCertStores",
			"()Ljava/util/List;"
		);
	}
	java::util::Date PKIXParameters::getDate() const
	{
		return callObjectMethod(
			"getDate",
			"()Ljava/util/Date;"
		);
	}
	JObject PKIXParameters::getInitialPolicies() const
	{
		return callObjectMethod(
			"getInitialPolicies",
			"()Ljava/util/Set;"
		);
	}
	jboolean PKIXParameters::getPolicyQualifiersRejected() const
	{
		return callMethod<jboolean>(
			"getPolicyQualifiersRejected",
			"()Z"
		);
	}
	JString PKIXParameters::getSigProvider() const
	{
		return callObjectMethod(
			"getSigProvider",
			"()Ljava/lang/String;"
		);
	}
	JObject PKIXParameters::getTargetCertConstraints() const
	{
		return callObjectMethod(
			"getTargetCertConstraints",
			"()Ljava/security/cert/CertSelector;"
		);
	}
	JObject PKIXParameters::getTrustAnchors() const
	{
		return callObjectMethod(
			"getTrustAnchors",
			"()Ljava/util/Set;"
		);
	}
	jboolean PKIXParameters::isAnyPolicyInhibited() const
	{
		return callMethod<jboolean>(
			"isAnyPolicyInhibited",
			"()Z"
		);
	}
	jboolean PKIXParameters::isExplicitPolicyRequired() const
	{
		return callMethod<jboolean>(
			"isExplicitPolicyRequired",
			"()Z"
		);
	}
	jboolean PKIXParameters::isPolicyMappingInhibited() const
	{
		return callMethod<jboolean>(
			"isPolicyMappingInhibited",
			"()Z"
		);
	}
	jboolean PKIXParameters::isRevocationEnabled() const
	{
		return callMethod<jboolean>(
			"isRevocationEnabled",
			"()Z"
		);
	}
	void PKIXParameters::setAnyPolicyInhibited(jboolean arg0) const
	{
		callMethod<void>(
			"setAnyPolicyInhibited",
			"(Z)V",
			arg0
		);
	}
	void PKIXParameters::setCertPathCheckers(JObject arg0) const
	{
		callMethod<void>(
			"setCertPathCheckers",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void PKIXParameters::setCertStores(JObject arg0) const
	{
		callMethod<void>(
			"setCertStores",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void PKIXParameters::setDate(java::util::Date arg0) const
	{
		callMethod<void>(
			"setDate",
			"(Ljava/util/Date;)V",
			arg0.object()
		);
	}
	void PKIXParameters::setExplicitPolicyRequired(jboolean arg0) const
	{
		callMethod<void>(
			"setExplicitPolicyRequired",
			"(Z)V",
			arg0
		);
	}
	void PKIXParameters::setInitialPolicies(JObject arg0) const
	{
		callMethod<void>(
			"setInitialPolicies",
			"(Ljava/util/Set;)V",
			arg0.object()
		);
	}
	void PKIXParameters::setPolicyMappingInhibited(jboolean arg0) const
	{
		callMethod<void>(
			"setPolicyMappingInhibited",
			"(Z)V",
			arg0
		);
	}
	void PKIXParameters::setPolicyQualifiersRejected(jboolean arg0) const
	{
		callMethod<void>(
			"setPolicyQualifiersRejected",
			"(Z)V",
			arg0
		);
	}
	void PKIXParameters::setRevocationEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setRevocationEnabled",
			"(Z)V",
			arg0
		);
	}
	void PKIXParameters::setSigProvider(JString arg0) const
	{
		callMethod<void>(
			"setSigProvider",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void PKIXParameters::setTargetCertConstraints(JObject arg0) const
	{
		callMethod<void>(
			"setTargetCertConstraints",
			"(Ljava/security/cert/CertSelector;)V",
			arg0.object()
		);
	}
	void PKIXParameters::setTrustAnchors(JObject arg0) const
	{
		callMethod<void>(
			"setTrustAnchors",
			"(Ljava/util/Set;)V",
			arg0.object()
		);
	}
	JString PKIXParameters::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert

