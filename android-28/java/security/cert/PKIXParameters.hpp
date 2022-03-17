#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../KeyStore.def.hpp"
#include "./CertStore.def.hpp"
#include "./PKIXCertPathChecker.def.hpp"
#include "../../util/Date.def.hpp"
#include "./PKIXParameters.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	inline PKIXParameters::PKIXParameters(java::security::KeyStore arg0)
		: JObject(
			"java.security.cert.PKIXParameters",
			"(Ljava/security/KeyStore;)V",
			arg0.object()
		) {}
	inline PKIXParameters::PKIXParameters(JObject arg0)
		: JObject(
			"java.security.cert.PKIXParameters",
			"(Ljava/util/Set;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void PKIXParameters::addCertPathChecker(java::security::cert::PKIXCertPathChecker arg0) const
	{
		callMethod<void>(
			"addCertPathChecker",
			"(Ljava/security/cert/PKIXCertPathChecker;)V",
			arg0.object()
		);
	}
	inline void PKIXParameters::addCertStore(java::security::cert::CertStore arg0) const
	{
		callMethod<void>(
			"addCertStore",
			"(Ljava/security/cert/CertStore;)V",
			arg0.object()
		);
	}
	inline JObject PKIXParameters::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject PKIXParameters::getCertPathCheckers() const
	{
		return callObjectMethod(
			"getCertPathCheckers",
			"()Ljava/util/List;"
		);
	}
	inline JObject PKIXParameters::getCertStores() const
	{
		return callObjectMethod(
			"getCertStores",
			"()Ljava/util/List;"
		);
	}
	inline java::util::Date PKIXParameters::getDate() const
	{
		return callObjectMethod(
			"getDate",
			"()Ljava/util/Date;"
		);
	}
	inline JObject PKIXParameters::getInitialPolicies() const
	{
		return callObjectMethod(
			"getInitialPolicies",
			"()Ljava/util/Set;"
		);
	}
	inline jboolean PKIXParameters::getPolicyQualifiersRejected() const
	{
		return callMethod<jboolean>(
			"getPolicyQualifiersRejected",
			"()Z"
		);
	}
	inline JString PKIXParameters::getSigProvider() const
	{
		return callObjectMethod(
			"getSigProvider",
			"()Ljava/lang/String;"
		);
	}
	inline JObject PKIXParameters::getTargetCertConstraints() const
	{
		return callObjectMethod(
			"getTargetCertConstraints",
			"()Ljava/security/cert/CertSelector;"
		);
	}
	inline JObject PKIXParameters::getTrustAnchors() const
	{
		return callObjectMethod(
			"getTrustAnchors",
			"()Ljava/util/Set;"
		);
	}
	inline jboolean PKIXParameters::isAnyPolicyInhibited() const
	{
		return callMethod<jboolean>(
			"isAnyPolicyInhibited",
			"()Z"
		);
	}
	inline jboolean PKIXParameters::isExplicitPolicyRequired() const
	{
		return callMethod<jboolean>(
			"isExplicitPolicyRequired",
			"()Z"
		);
	}
	inline jboolean PKIXParameters::isPolicyMappingInhibited() const
	{
		return callMethod<jboolean>(
			"isPolicyMappingInhibited",
			"()Z"
		);
	}
	inline jboolean PKIXParameters::isRevocationEnabled() const
	{
		return callMethod<jboolean>(
			"isRevocationEnabled",
			"()Z"
		);
	}
	inline void PKIXParameters::setAnyPolicyInhibited(jboolean arg0) const
	{
		callMethod<void>(
			"setAnyPolicyInhibited",
			"(Z)V",
			arg0
		);
	}
	inline void PKIXParameters::setCertPathCheckers(JObject arg0) const
	{
		callMethod<void>(
			"setCertPathCheckers",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void PKIXParameters::setCertStores(JObject arg0) const
	{
		callMethod<void>(
			"setCertStores",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void PKIXParameters::setDate(java::util::Date arg0) const
	{
		callMethod<void>(
			"setDate",
			"(Ljava/util/Date;)V",
			arg0.object()
		);
	}
	inline void PKIXParameters::setExplicitPolicyRequired(jboolean arg0) const
	{
		callMethod<void>(
			"setExplicitPolicyRequired",
			"(Z)V",
			arg0
		);
	}
	inline void PKIXParameters::setInitialPolicies(JObject arg0) const
	{
		callMethod<void>(
			"setInitialPolicies",
			"(Ljava/util/Set;)V",
			arg0.object()
		);
	}
	inline void PKIXParameters::setPolicyMappingInhibited(jboolean arg0) const
	{
		callMethod<void>(
			"setPolicyMappingInhibited",
			"(Z)V",
			arg0
		);
	}
	inline void PKIXParameters::setPolicyQualifiersRejected(jboolean arg0) const
	{
		callMethod<void>(
			"setPolicyQualifiersRejected",
			"(Z)V",
			arg0
		);
	}
	inline void PKIXParameters::setRevocationEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setRevocationEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void PKIXParameters::setSigProvider(JString arg0) const
	{
		callMethod<void>(
			"setSigProvider",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void PKIXParameters::setTargetCertConstraints(JObject arg0) const
	{
		callMethod<void>(
			"setTargetCertConstraints",
			"(Ljava/security/cert/CertSelector;)V",
			arg0.object()
		);
	}
	inline void PKIXParameters::setTrustAnchors(JObject arg0) const
	{
		callMethod<void>(
			"setTrustAnchors",
			"(Ljava/util/Set;)V",
			arg0.object()
		);
	}
	inline JString PKIXParameters::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert

// Base class headers

