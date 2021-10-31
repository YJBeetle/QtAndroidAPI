#include "./IkeFqdnIdentification.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	jstring IkeFqdnIdentification::fqdn()
	{
		return getObjectField(
			"fqdn",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	IkeFqdnIdentification::IkeFqdnIdentification(QJniObject obj) : android::net::ipsec::ike::IkeIdentification(obj) {}
	
	// Constructors
	IkeFqdnIdentification::IkeFqdnIdentification(jstring arg0)
		: android::net::ipsec::ike::IkeIdentification(
			"android.net.ipsec.ike.IkeFqdnIdentification",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jboolean IkeFqdnIdentification::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint IkeFqdnIdentification::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike

