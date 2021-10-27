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
	
	X509CRLSelector::X509CRLSelector(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	X509CRLSelector::X509CRLSelector()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.X509CRLSelector",
			"()V"
		);
	}
	
	// Methods
	void X509CRLSelector::addIssuer(javax::security::auth::x500::X500Principal arg0)
	{
		__thiz.callMethod<void>(
			"addIssuer",
			"(Ljavax/security/auth/x500/X500Principal;)V",
			arg0.__jniObject().object()
		);
	}
	void X509CRLSelector::addIssuerName(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"addIssuerName",
			"([B)V",
			arg0
		);
	}
	void X509CRLSelector::addIssuerName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"addIssuerName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void X509CRLSelector::addIssuerName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"addIssuerName",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jobject X509CRLSelector::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject X509CRLSelector::getCertificateChecking()
	{
		return __thiz.callObjectMethod(
			"getCertificateChecking",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	QAndroidJniObject X509CRLSelector::getDateAndTime()
	{
		return __thiz.callObjectMethod(
			"getDateAndTime",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject X509CRLSelector::getIssuerNames()
	{
		return __thiz.callObjectMethod(
			"getIssuerNames",
			"()Ljava/util/Collection;"
		);
	}
	QAndroidJniObject X509CRLSelector::getIssuers()
	{
		return __thiz.callObjectMethod(
			"getIssuers",
			"()Ljava/util/Collection;"
		);
	}
	QAndroidJniObject X509CRLSelector::getMaxCRL()
	{
		return __thiz.callObjectMethod(
			"getMaxCRL",
			"()Ljava/math/BigInteger;"
		);
	}
	QAndroidJniObject X509CRLSelector::getMinCRL()
	{
		return __thiz.callObjectMethod(
			"getMinCRL",
			"()Ljava/math/BigInteger;"
		);
	}
	jboolean X509CRLSelector::match(java::security::cert::CRL arg0)
	{
		return __thiz.callMethod<jboolean>(
			"match",
			"(Ljava/security/cert/CRL;)Z",
			arg0.__jniObject().object()
		);
	}
	void X509CRLSelector::setCertificateChecking(java::security::cert::X509Certificate arg0)
	{
		__thiz.callMethod<void>(
			"setCertificateChecking",
			"(Ljava/security/cert/X509Certificate;)V",
			arg0.__jniObject().object()
		);
	}
	void X509CRLSelector::setDateAndTime(java::util::Date arg0)
	{
		__thiz.callMethod<void>(
			"setDateAndTime",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	void X509CRLSelector::setIssuerNames(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setIssuerNames",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	void X509CRLSelector::setIssuers(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setIssuers",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	void X509CRLSelector::setMaxCRLNumber(java::math::BigInteger arg0)
	{
		__thiz.callMethod<void>(
			"setMaxCRLNumber",
			"(Ljava/math/BigInteger;)V",
			arg0.__jniObject().object()
		);
	}
	void X509CRLSelector::setMinCRLNumber(java::math::BigInteger arg0)
	{
		__thiz.callMethod<void>(
			"setMinCRLNumber",
			"(Ljava/math/BigInteger;)V",
			arg0.__jniObject().object()
		);
	}
	jstring X509CRLSelector::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::cert

