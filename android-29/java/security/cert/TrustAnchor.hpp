#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class TrustAnchor : public __JniBaseClass
	{
	public:
		// Fields
		
		TrustAnchor(QAndroidJniObject obj);
		// Constructors
		TrustAnchor(java::security::cert::X509Certificate arg0, jbyteArray arg1);
		TrustAnchor(jstring arg0, __JniBaseClass arg1, jbyteArray arg2);
		TrustAnchor(javax::security::auth::x500::X500Principal arg0, __JniBaseClass arg1, jbyteArray arg2);
		TrustAnchor() = default;
		
		// Methods
		QAndroidJniObject getCA();
		jstring getCAName();
		QAndroidJniObject getCAPublicKey();
		jbyteArray getNameConstraints();
		QAndroidJniObject getTrustedCert();
		jstring toString();
	};
} // namespace java::security::cert

