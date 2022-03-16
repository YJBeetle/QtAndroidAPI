#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JString.hpp"
#include "./X509Certificate.def.hpp"
#include "../../../javax/security/auth/x500/X500Principal.def.hpp"
#include "./TrustAnchor.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	inline TrustAnchor::TrustAnchor(java::security::cert::X509Certificate arg0, JByteArray arg1)
		: JObject(
			"java.security.cert.TrustAnchor",
			"(Ljava/security/cert/X509Certificate;[B)V",
			arg0.object(),
			arg1.object<jbyteArray>()
		) {}
	inline TrustAnchor::TrustAnchor(JString arg0, JObject arg1, JByteArray arg2)
		: JObject(
			"java.security.cert.TrustAnchor",
			"(Ljava/lang/String;Ljava/security/PublicKey;[B)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jbyteArray>()
		) {}
	inline TrustAnchor::TrustAnchor(javax::security::auth::x500::X500Principal arg0, JObject arg1, JByteArray arg2)
		: JObject(
			"java.security.cert.TrustAnchor",
			"(Ljavax/security/auth/x500/X500Principal;Ljava/security/PublicKey;[B)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jbyteArray>()
		) {}
	
	// Methods
	inline javax::security::auth::x500::X500Principal TrustAnchor::getCA() const
	{
		return callObjectMethod(
			"getCA",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	inline JString TrustAnchor::getCAName() const
	{
		return callObjectMethod(
			"getCAName",
			"()Ljava/lang/String;"
		);
	}
	inline JObject TrustAnchor::getCAPublicKey() const
	{
		return callObjectMethod(
			"getCAPublicKey",
			"()Ljava/security/PublicKey;"
		);
	}
	inline JByteArray TrustAnchor::getNameConstraints() const
	{
		return callObjectMethod(
			"getNameConstraints",
			"()[B"
		);
	}
	inline java::security::cert::X509Certificate TrustAnchor::getTrustedCert() const
	{
		return callObjectMethod(
			"getTrustedCert",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	inline JString TrustAnchor::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert

// Base class headers

