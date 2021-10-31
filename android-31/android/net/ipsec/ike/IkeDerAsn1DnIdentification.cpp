#include "../../../../javax/security/auth/x500/X500Principal.hpp"
#include "./IkeDerAsn1DnIdentification.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	javax::security::auth::x500::X500Principal IkeDerAsn1DnIdentification::derAsn1Dn()
	{
		return getObjectField(
			"derAsn1Dn",
			"Ljavax/security/auth/x500/X500Principal;"
		);
	}
	
	// QAndroidJniObject forward
	IkeDerAsn1DnIdentification::IkeDerAsn1DnIdentification(QAndroidJniObject obj) : android::net::ipsec::ike::IkeIdentification(obj) {}
	
	// Constructors
	IkeDerAsn1DnIdentification::IkeDerAsn1DnIdentification(javax::security::auth::x500::X500Principal arg0)
		: android::net::ipsec::ike::IkeIdentification(
			"android.net.ipsec.ike.IkeDerAsn1DnIdentification",
			"(Ljavax/security/auth/x500/X500Principal;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean IkeDerAsn1DnIdentification::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint IkeDerAsn1DnIdentification::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike

