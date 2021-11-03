#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./IkeRfc822AddrIdentification.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	JString IkeRfc822AddrIdentification::rfc822Name()
	{
		return getObjectField(
			"rfc822Name",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	IkeRfc822AddrIdentification::IkeRfc822AddrIdentification(QAndroidJniObject obj) : android::net::ipsec::ike::IkeIdentification(obj) {}
	
	// Constructors
	IkeRfc822AddrIdentification::IkeRfc822AddrIdentification(JString arg0)
		: android::net::ipsec::ike::IkeIdentification(
			"android.net.ipsec.ike.IkeRfc822AddrIdentification",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	jboolean IkeRfc822AddrIdentification::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint IkeRfc822AddrIdentification::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike

