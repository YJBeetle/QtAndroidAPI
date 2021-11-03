#include "./X509Certificate.hpp"
#include "../../../javax/security/auth/x500/X500Principal.hpp"
#include "./TrustAnchor.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	TrustAnchor::TrustAnchor(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TrustAnchor::TrustAnchor(java::security::cert::X509Certificate arg0, jbyteArray arg1)
		: JObject(
			"java.security.cert.TrustAnchor",
			"(Ljava/security/cert/X509Certificate;[B)V",
			arg0.object(),
			arg1
		) {}
	TrustAnchor::TrustAnchor(jstring arg0, JObject arg1, jbyteArray arg2)
		: JObject(
			"java.security.cert.TrustAnchor",
			"(Ljava/lang/String;Ljava/security/PublicKey;[B)V",
			arg0,
			arg1.object(),
			arg2
		) {}
	TrustAnchor::TrustAnchor(javax::security::auth::x500::X500Principal arg0, JObject arg1, jbyteArray arg2)
		: JObject(
			"java.security.cert.TrustAnchor",
			"(Ljavax/security/auth/x500/X500Principal;Ljava/security/PublicKey;[B)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	javax::security::auth::x500::X500Principal TrustAnchor::getCA()
	{
		return callObjectMethod(
			"getCA",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	jstring TrustAnchor::getCAName()
	{
		return callObjectMethod(
			"getCAName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	JObject TrustAnchor::getCAPublicKey()
	{
		return callObjectMethod(
			"getCAPublicKey",
			"()Ljava/security/PublicKey;"
		);
	}
	jbyteArray TrustAnchor::getNameConstraints()
	{
		return callObjectMethod(
			"getNameConstraints",
			"()[B"
		).object<jbyteArray>();
	}
	java::security::cert::X509Certificate TrustAnchor::getTrustedCert()
	{
		return callObjectMethod(
			"getTrustedCert",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	jstring TrustAnchor::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::cert

