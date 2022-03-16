#pragma once

#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./IkeFqdnIdentification.def.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	inline JString IkeFqdnIdentification::fqdn()
	{
		return getObjectField(
			"fqdn",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline IkeFqdnIdentification::IkeFqdnIdentification(JString arg0)
		: android::net::ipsec::ike::IkeIdentification(
			"android.net.ipsec.ike.IkeFqdnIdentification",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jboolean IkeFqdnIdentification::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint IkeFqdnIdentification::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike

// Base class headers
#include "./IkeIdentification.hpp"

