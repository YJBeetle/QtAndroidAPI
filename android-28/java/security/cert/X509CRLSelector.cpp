#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
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
	void X509CRLSelector::addIssuer(javax::security::auth::x500::X500Principal arg0) const
	{
		callMethod<void>(
			"addIssuer",
			"(Ljavax/security/auth/x500/X500Principal;)V",
			arg0.object()
		);
	}
	void X509CRLSelector::addIssuerName(JByteArray arg0) const
	{
		callMethod<void>(
			"addIssuerName",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void X509CRLSelector::addIssuerName(JString arg0) const
	{
		callMethod<void>(
			"addIssuerName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	JObject X509CRLSelector::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	java::security::cert::X509Certificate X509CRLSelector::getCertificateChecking() const
	{
		return callObjectMethod(
			"getCertificateChecking",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	java::util::Date X509CRLSelector::getDateAndTime() const
	{
		return callObjectMethod(
			"getDateAndTime",
			"()Ljava/util/Date;"
		);
	}
	JObject X509CRLSelector::getIssuerNames() const
	{
		return callObjectMethod(
			"getIssuerNames",
			"()Ljava/util/Collection;"
		);
	}
	JObject X509CRLSelector::getIssuers() const
	{
		return callObjectMethod(
			"getIssuers",
			"()Ljava/util/Collection;"
		);
	}
	java::math::BigInteger X509CRLSelector::getMaxCRL() const
	{
		return callObjectMethod(
			"getMaxCRL",
			"()Ljava/math/BigInteger;"
		);
	}
	java::math::BigInteger X509CRLSelector::getMinCRL() const
	{
		return callObjectMethod(
			"getMinCRL",
			"()Ljava/math/BigInteger;"
		);
	}
	jboolean X509CRLSelector::match(java::security::cert::CRL arg0) const
	{
		return callMethod<jboolean>(
			"match",
			"(Ljava/security/cert/CRL;)Z",
			arg0.object()
		);
	}
	void X509CRLSelector::setCertificateChecking(java::security::cert::X509Certificate arg0) const
	{
		callMethod<void>(
			"setCertificateChecking",
			"(Ljava/security/cert/X509Certificate;)V",
			arg0.object()
		);
	}
	void X509CRLSelector::setDateAndTime(java::util::Date arg0) const
	{
		callMethod<void>(
			"setDateAndTime",
			"(Ljava/util/Date;)V",
			arg0.object()
		);
	}
	void X509CRLSelector::setIssuerNames(JObject arg0) const
	{
		callMethod<void>(
			"setIssuerNames",
			"(Ljava/util/Collection;)V",
			arg0.object()
		);
	}
	void X509CRLSelector::setIssuers(JObject arg0) const
	{
		callMethod<void>(
			"setIssuers",
			"(Ljava/util/Collection;)V",
			arg0.object()
		);
	}
	void X509CRLSelector::setMaxCRLNumber(java::math::BigInteger arg0) const
	{
		callMethod<void>(
			"setMaxCRLNumber",
			"(Ljava/math/BigInteger;)V",
			arg0.object()
		);
	}
	void X509CRLSelector::setMinCRLNumber(java::math::BigInteger arg0) const
	{
		callMethod<void>(
			"setMinCRLNumber",
			"(Ljava/math/BigInteger;)V",
			arg0.object()
		);
	}
	JString X509CRLSelector::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert

