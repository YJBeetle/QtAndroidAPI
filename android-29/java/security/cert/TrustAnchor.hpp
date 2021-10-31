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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TrustAnchor(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TrustAnchor(QAndroidJniObject obj);
		
		// Constructors
		TrustAnchor(java::security::cert::X509Certificate arg0, jbyteArray arg1);
		TrustAnchor(jstring arg0, __JniBaseClass arg1, jbyteArray arg2);
		TrustAnchor(javax::security::auth::x500::X500Principal arg0, __JniBaseClass arg1, jbyteArray arg2);
		
		// Methods
		QAndroidJniObject getCA();
		jstring getCAName();
		QAndroidJniObject getCAPublicKey();
		jbyteArray getNameConstraints();
		QAndroidJniObject getTrustedCert();
		jstring toString();
	};
} // namespace java::security::cert

