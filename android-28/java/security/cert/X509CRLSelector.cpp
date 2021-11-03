#include "../../math/BigInteger.hpp"
#include "./CRL.hpp"
#include "./X509Certificate.hpp"
#include "../../util/Date.hpp"
#include "../../util/HashSet.hpp"
#include "../../../javax/security/auth/x500/X500Principal.hpp"
#include "./X509CRLSelector.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	X509CRLSelector::X509CRLSelector(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	X509CRLSelector::X509CRLSelector()
		: JObject(
			"java.security.cert.X509CRLSelector",
			"()V"
		) {}
	
	// Methods
	void X509CRLSelector::addIssuer(javax::security::auth::x500::X500Principal arg0)
	{
		callMethod<void>(
			"addIssuer",
			"(Ljavax/security/auth/x500/X500Principal;)V",
			arg0.object()
		);
	}
	void X509CRLSelector::addIssuerName(jbyteArray arg0)
	{
		callMethod<void>(
			"addIssuerName",
			"([B)V",
			arg0
		);
	}
	void X509CRLSelector::addIssuerName(jstring arg0)
	{
		callMethod<void>(
			"addIssuerName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jobject X509CRLSelector::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	java::security::cert::X509Certificate X509CRLSelector::getCertificateChecking()
	{
		return callObjectMethod(
			"getCertificateChecking",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	java::util::Date X509CRLSelector::getDateAndTime()
	{
		return callObjectMethod(
			"getDateAndTime",
			"()Ljava/util/Date;"
		);
	}
	JObject X509CRLSelector::getIssuerNames()
	{
		return callObjectMethod(
			"getIssuerNames",
			"()Ljava/util/Collection;"
		);
	}
	JObject X509CRLSelector::getIssuers()
	{
		return callObjectMethod(
			"getIssuers",
			"()Ljava/util/Collection;"
		);
	}
	java::math::BigInteger X509CRLSelector::getMaxCRL()
	{
		return callObjectMethod(
			"getMaxCRL",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger X509CRLSelector::getMinCRL()
	{
		return callObjectMethod(
			"getMinCRL",
			"()Ljava/math/BigInteger;"
		);
	}
	jboolean X509CRLSelector::match(java::security::cert::CRL arg0)
	{
		return callMethod<jboolean>(
			"match",
			"(Ljava/security/cert/CRL;)Z",
			arg0.object()
		);
	}
	void X509CRLSelector::setCertificateChecking(java::security::cert::X509Certificate arg0)
	{
		callMethod<void>(
			"setCertificateChecking",
			"(Ljava/security/cert/X509Certificate;)V",
			arg0.object()
		);
	}
	void X509CRLSelector::setDateAndTime(java::util::Date arg0)
	{
		callMethod<void>(
			"setDateAndTime",
			"(Ljava/util/Date;)V",
			arg0.object()
		);
	}
	void X509CRLSelector::setIssuerNames(JObject arg0)
	{
		callMethod<void>(
			"setIssuerNames",
			"(Ljava/util/Collection;)V",
			arg0.object()
		);
	}
	void X509CRLSelector::setIssuers(JObject arg0)
	{
		callMethod<void>(
			"setIssuers",
			"(Ljava/util/Collection;)V",
			arg0.object()
		);
	}
	void X509CRLSelector::setMaxCRLNumber(java::math::BigInteger arg0)
	{
		callMethod<void>(
			"setMaxCRLNumber",
			"(Ljava/math/BigInteger;)V",
			arg0.object()
		);
	}
	void X509CRLSelector::setMinCRLNumber(java::math::BigInteger arg0)
	{
		callMethod<void>(
			"setMinCRLNumber",
			"(Ljava/math/BigInteger;)V",
			arg0.object()
		);
	}
	jstring X509CRLSelector::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::cert

