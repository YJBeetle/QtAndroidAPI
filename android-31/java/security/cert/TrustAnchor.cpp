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
	javax::security::auth::x500::X500Principal TrustAnchor::getCA() const
	{
		return callObjectMethod(
			"getCA",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	JString TrustAnchor::getCAName() const
	{
		return callObjectMethod(
			"getCAName",
			"()Ljava/lang/String;"
		);
	}
	JObject TrustAnchor::getCAPublicKey() const
	{
		return callObjectMethod(
			"getCAPublicKey",
			"()Ljava/security/PublicKey;"
		);
	}
	JByteArray TrustAnchor::getNameConstraints() const
	{
		return callObjectMethod(
			"getNameConstraints",
			"()[B"
		);
	}
	java::security::cert::X509Certificate TrustAnchor::getTrustedCert() const
	{
		return callObjectMethod(
			"getTrustedCert",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	JString TrustAnchor::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert

