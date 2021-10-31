#include "../../math/BigInteger.hpp"
#include "../Provider.hpp"
#include "./X509CRLEntry.hpp"
#include "./X509Certificate.hpp"
#include "../../util/Date.hpp"
#include "../../../javax/security/auth/x500/X500Principal.hpp"
#include "./X509CRL.hpp"

namespace java::security::cert
{
	// Fields
	
	X509CRL::X509CRL(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean X509CRL::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jbyteArray X509CRL::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject X509CRL::getIssuerDN()
	{
		return __thiz.callObjectMethod(
			"getIssuerDN",
			"()Ljava/security/Principal;"
		);
	}
	QAndroidJniObject X509CRL::getIssuerX500Principal()
	{
		return __thiz.callObjectMethod(
			"getIssuerX500Principal",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	QAndroidJniObject X509CRL::getNextUpdate()
	{
		return __thiz.callObjectMethod(
			"getNextUpdate",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject X509CRL::getRevokedCertificate(java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"getRevokedCertificate",
			"(Ljava/math/BigInteger;)Ljava/security/cert/X509CRLEntry;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject X509CRL::getRevokedCertificate(java::security::cert::X509Certificate arg0)
	{
		return __thiz.callObjectMethod(
			"getRevokedCertificate",
			"(Ljava/security/cert/X509Certificate;)Ljava/security/cert/X509CRLEntry;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject X509CRL::getRevokedCertificates()
	{
		return __thiz.callObjectMethod(
			"getRevokedCertificates",
			"()Ljava/util/Set;"
		);
	}
	jstring X509CRL::getSigAlgName()
	{
		return __thiz.callObjectMethod(
			"getSigAlgName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring X509CRL::getSigAlgOID()
	{
		return __thiz.callObjectMethod(
			"getSigAlgOID",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray X509CRL::getSigAlgParams()
	{
		return __thiz.callObjectMethod(
			"getSigAlgParams",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray X509CRL::getSignature()
	{
		return __thiz.callObjectMethod(
			"getSignature",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray X509CRL::getTBSCertList()
	{
		return __thiz.callObjectMethod(
			"getTBSCertList",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject X509CRL::getThisUpdate()
	{
		return __thiz.callObjectMethod(
			"getThisUpdate",
			"()Ljava/util/Date;"
		);
	}
	jint X509CRL::getVersion()
	{
		return __thiz.callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	jint X509CRL::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void X509CRL::verify(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;)V",
			arg0.__jniObject().object()
		);
	}
	void X509CRL::verify(__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void X509CRL::verify(__JniBaseClass arg0, java::security::Provider arg1)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/security/Provider;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace java::security::cert

