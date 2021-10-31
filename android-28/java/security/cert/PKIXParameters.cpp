#include "../KeyStore.hpp"
#include "./CertStore.hpp"
#include "./PKIXCertPathChecker.hpp"
#include "../../util/Date.hpp"
#include "./PKIXParameters.hpp"

namespace java::security::cert
{
	// Fields
	
	// QJniObject forward
	PKIXParameters::PKIXParameters(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PKIXParameters::PKIXParameters(java::security::KeyStore arg0)
		: __JniBaseClass(
			"java.security.cert.PKIXParameters",
			"(Ljava/security/KeyStore;)V",
			arg0.object()
		) {}
	PKIXParameters::PKIXParameters(__JniBaseClass arg0)
		: __JniBaseClass(
			"java.security.cert.PKIXParameters",
			"(Ljava/util/Set;)V",
			arg0.object()
		) {}
	
	// Methods
	void PKIXParameters::addCertPathChecker(java::security::cert::PKIXCertPathChecker arg0)
	{
		callMethod<void>(
			"addCertPathChecker",
			"(Ljava/security/cert/PKIXCertPathChecker;)V",
			arg0.object()
		);
	}
	void PKIXParameters::addCertStore(java::security::cert::CertStore arg0)
	{
		callMethod<void>(
			"addCertStore",
			"(Ljava/security/cert/CertStore;)V",
			arg0.object()
		);
	}
	jobject PKIXParameters::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	__JniBaseClass PKIXParameters::getCertPathCheckers()
	{
		return callObjectMethod(
			"getCertPathCheckers",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass PKIXParameters::getCertStores()
	{
		return callObjectMethod(
			"getCertStores",
			"()Ljava/util/List;"
		);
	}
	java::util::Date PKIXParameters::getDate()
	{
		return callObjectMethod(
			"getDate",
			"()Ljava/util/Date;"
		);
	}
	__JniBaseClass PKIXParameters::getInitialPolicies()
	{
		return callObjectMethod(
			"getInitialPolicies",
			"()Ljava/util/Set;"
		);
	}
	jboolean PKIXParameters::getPolicyQualifiersRejected()
	{
		return callMethod<jboolean>(
			"getPolicyQualifiersRejected",
			"()Z"
		);
	}
	jstring PKIXParameters::getSigProvider()
	{
		return callObjectMethod(
			"getSigProvider",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	__JniBaseClass PKIXParameters::getTargetCertConstraints()
	{
		return callObjectMethod(
			"getTargetCertConstraints",
			"()Ljava/security/cert/CertSelector;"
		);
	}
	__JniBaseClass PKIXParameters::getTrustAnchors()
	{
		return callObjectMethod(
			"getTrustAnchors",
			"()Ljava/util/Set;"
		);
	}
	jboolean PKIXParameters::isAnyPolicyInhibited()
	{
		return callMethod<jboolean>(
			"isAnyPolicyInhibited",
			"()Z"
		);
	}
	jboolean PKIXParameters::isExplicitPolicyRequired()
	{
		return callMethod<jboolean>(
			"isExplicitPolicyRequired",
			"()Z"
		);
	}
	jboolean PKIXParameters::isPolicyMappingInhibited()
	{
		return callMethod<jboolean>(
			"isPolicyMappingInhibited",
			"()Z"
		);
	}
	jboolean PKIXParameters::isRevocationEnabled()
	{
		return callMethod<jboolean>(
			"isRevocationEnabled",
			"()Z"
		);
	}
	void PKIXParameters::setAnyPolicyInhibited(jboolean arg0)
	{
		callMethod<void>(
			"setAnyPolicyInhibited",
			"(Z)V",
			arg0
		);
	}
	void PKIXParameters::setCertPathCheckers(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setCertPathCheckers",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void PKIXParameters::setCertStores(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setCertStores",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void PKIXParameters::setDate(java::util::Date arg0)
	{
		callMethod<void>(
			"setDate",
			"(Ljava/util/Date;)V",
			arg0.object()
		);
	}
	void PKIXParameters::setExplicitPolicyRequired(jboolean arg0)
	{
		callMethod<void>(
			"setExplicitPolicyRequired",
			"(Z)V",
			arg0
		);
	}
	void PKIXParameters::setInitialPolicies(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setInitialPolicies",
			"(Ljava/util/Set;)V",
			arg0.object()
		);
	}
	void PKIXParameters::setPolicyMappingInhibited(jboolean arg0)
	{
		callMethod<void>(
			"setPolicyMappingInhibited",
			"(Z)V",
			arg0
		);
	}
	void PKIXParameters::setPolicyQualifiersRejected(jboolean arg0)
	{
		callMethod<void>(
			"setPolicyQualifiersRejected",
			"(Z)V",
			arg0
		);
	}
	void PKIXParameters::setRevocationEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setRevocationEnabled",
			"(Z)V",
			arg0
		);
	}
	void PKIXParameters::setSigProvider(jstring arg0)
	{
		callMethod<void>(
			"setSigProvider",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void PKIXParameters::setTargetCertConstraints(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setTargetCertConstraints",
			"(Ljava/security/cert/CertSelector;)V",
			arg0.object()
		);
	}
	void PKIXParameters::setTrustAnchors(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setTrustAnchors",
			"(Ljava/util/Set;)V",
			arg0.object()
		);
	}
	jstring PKIXParameters::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::cert

