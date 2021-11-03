#include "../../../JByteArray.hpp"
#include "../../../JString.hpp"
#include "./X509Certificate.hpp"
#include "../../../javax/security/auth/x500/X500Principal.hpp"
#include "./TrustAnchor.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	TrustAnchor::TrustAnchor(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TrustAnchor::TrustAnchor(java::security::cert::X509Certificate arg0, JByteArray arg1)
		: JObject(
			"java.security.cert.TrustAnchor",
			"(Ljava/security/cert/X509Certificate;[B)V",
			arg0.object(),
			arg1.object<jbyteArray>()
		) {}
	TrustAnchor::TrustAnchor(JString arg0, JObject arg1, JByteArray arg2)
		: JObject(
			"java.security.cert.TrustAnchor",
			"(Ljava/lang/String;Ljava/security/PublicKey;[B)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jbyteArray>()
		) {}
	TrustAnchor::TrustAnchor(javax::security::auth::x500::X500Principal arg0, JObject arg1, JByteArray arg2)
		: JObject(
			"java.security.cert.TrustAnchor",
			"(Ljavax/security/auth/x500/X500Principal;Ljava/security/PublicKey;[B)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jbyteArray>()
		) {}
	
	// Methods
	javax::security::auth::x500::X500Principal TrustAnchor::getCA()
	{
		return callObjectMethod(
			"getCA",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	JString TrustAnchor::getCAName()
	{
		return callObjectMethod(
			"getCAName",
			"()Ljava/lang/String;"
		);
	}
	JObject TrustAnchor::getCAPublicKey()
	{
		return callObjectMethod(
			"getCAPublicKey",
			"()Ljava/security/PublicKey;"
		);
	}
	JByteArray TrustAnchor::getNameConstraints()
	{
		return callObjectMethod(
			"getNameConstraints",
			"()[B"
		);
	}
	java::security::cert::X509Certificate TrustAnchor::getTrustedCert()
	{
		return callObjectMethod(
			"getTrustedCert",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	JString TrustAnchor::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert

