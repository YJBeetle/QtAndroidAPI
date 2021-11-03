#include "../../../../JByteArray.hpp"
#include "../../../../JObject.hpp"
#include "./IkeKeyIdIdentification.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	JByteArray IkeKeyIdIdentification::keyId()
	{
		return getObjectField(
			"keyId",
			"[B"
		);
	}
	
	// QJniObject forward
	IkeKeyIdIdentification::IkeKeyIdIdentification(QJniObject obj) : android::net::ipsec::ike::IkeIdentification(obj) {}
	
	// Constructors
	IkeKeyIdIdentification::IkeKeyIdIdentification(JByteArray arg0)
		: android::net::ipsec::ike::IkeIdentification(
			"android.net.ipsec.ike.IkeKeyIdIdentification",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	
	// Methods
	jboolean IkeKeyIdIdentification::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint IkeKeyIdIdentification::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike

