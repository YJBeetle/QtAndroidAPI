#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "./IkeIdentification.hpp"

namespace javax::security::auth::x500
{
	class X500Principal;
}

namespace android::net::ipsec::ike
{
	class IkeDerAsn1DnIdentification : public android::net::ipsec::ike::IkeIdentification
	{
	public:
		// Fields
		javax::security::auth::x500::X500Principal derAsn1Dn();
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeDerAsn1DnIdentification(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::IkeIdentification(className, sig, std::forward<Ts>(agv)...) {}
		IkeDerAsn1DnIdentification(QJniObject obj);
		
		// Constructors
		IkeDerAsn1DnIdentification(javax::security::auth::x500::X500Principal arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace android::net::ipsec::ike

