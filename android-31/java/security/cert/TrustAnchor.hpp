#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JString;
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
		TrustAnchor(java::security::cert::X509Certificate arg0, JByteArray arg1);
		TrustAnchor(JString arg0, JObject arg1, JByteArray arg2);
		TrustAnchor(javax::security::auth::x500::X500Principal arg0, JObject arg1, JByteArray arg2);
		
		// Methods
		javax::security::auth::x500::X500Principal getCA() const;
		JString getCAName() const;
		JObject getCAPublicKey() const;
		JByteArray getNameConstraints() const;
		java::security::cert::X509Certificate getTrustedCert() const;
		JString toString() const;
	};
} // namespace java::security::cert

