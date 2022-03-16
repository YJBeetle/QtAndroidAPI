#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./IkeFqdnIdentification.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	JString IkeFqdnIdentification::fqdn()
	{
		return getObjectField(
			"fqdn",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	IkeFqdnIdentification::IkeFqdnIdentification(JString arg0)
		: android::net::ipsec::ike::IkeIdentification(
			"android.net.ipsec.ike.IkeFqdnIdentification",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	jboolean IkeFqdnIdentification::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint IkeFqdnIdentification::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike

