#include "./X509Certificate.hpp"
#include "../../../javax/security/auth/x500/X500Principal.hpp"
#include "./TrustAnchor.hpp"

namespace java::security::cert
{
	// Fields
	
	TrustAnchor::TrustAnchor(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TrustAnchor::TrustAnchor(java::security::cert::X509Certificate arg0, jbyteArray arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.TrustAnchor",
			"(Ljava/security/cert/X509Certificate;[B)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	TrustAnchor::TrustAnchor(jstring arg0, __JniBaseClass arg1, jbyteArray arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.TrustAnchor",
			"(Ljava/lang/String;Ljava/security/PublicKey;[B)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	TrustAnchor::TrustAnchor(javax::security::auth::x500::X500Principal arg0, __JniBaseClass arg1, jbyteArray arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.TrustAnchor",
			"(Ljavax/security/auth/x500/X500Principal;Ljava/security/PublicKey;[B)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject TrustAnchor::getCA()
	{
		return __thiz.callObjectMethod(
			"getCA",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	jstring TrustAnchor::getCAName()
	{
		return __thiz.callObjectMethod(
			"getCAName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TrustAnchor::getCAPublicKey()
	{
		return __thiz.callObjectMethod(
			"getCAPublicKey",
			"()Ljava/security/PublicKey;"
		);
	}
	jbyteArray TrustAnchor::getNameConstraints()
	{
		return __thiz.callObjectMethod(
			"getNameConstraints",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject TrustAnchor::getTrustedCert()
	{
		return __thiz.callObjectMethod(
			"getTrustedCert",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	jstring TrustAnchor::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::cert

