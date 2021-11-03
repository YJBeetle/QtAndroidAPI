#pragma once

#include "../../../JObject.hpp"

namespace java::security::cert
{
	class X509Certificate;
}
namespace javax::security::auth::x500
{
	class X500Principal;
}

namespace java::security::cert
{
	class TrustAnchor : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TrustAnchor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TrustAnchor(QJniObject obj);
		
		// Constructors
		TrustAnchor(java::security::cert::X509Certificate arg0, jbyteArray arg1);
		TrustAnchor(jstring arg0, JObject arg1, jbyteArray arg2);
		TrustAnchor(javax::security::auth::x500::X500Principal arg0, JObject arg1, jbyteArray arg2);
		
		// Methods
		javax::security::auth::x500::X500Principal getCA();
		jstring getCAName();
		JObject getCAPublicKey();
		jbyteArray getNameConstraints();
		java::security::cert::X509Certificate getTrustedCert();
		jstring toString();
	};
} // namespace java::security::cert

