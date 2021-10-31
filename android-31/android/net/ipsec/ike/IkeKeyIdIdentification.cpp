#include "./IkeKeyIdIdentification.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	jbyteArray IkeKeyIdIdentification::keyId()
	{
		return getObjectField(
			"keyId",
			"[B"
		).object<jbyteArray>();
	}
	
	// QJniObject forward
	IkeKeyIdIdentification::IkeKeyIdIdentification(QJniObject obj) : android::net::ipsec::ike::IkeIdentification(obj) {}
	
	// Constructors
	IkeKeyIdIdentification::IkeKeyIdIdentification(jbyteArray arg0)
		: android::net::ipsec::ike::IkeIdentification(
			"android.net.ipsec.ike.IkeKeyIdIdentification",
			"([B)V",
			arg0
		) {}
	
	// Methods
	jboolean IkeKeyIdIdentification::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint IkeKeyIdIdentification::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike

