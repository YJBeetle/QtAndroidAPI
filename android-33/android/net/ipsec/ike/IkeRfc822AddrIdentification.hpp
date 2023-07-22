#pragma once

#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./IkeRfc822AddrIdentification.def.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	inline JString IkeRfc822AddrIdentification::rfc822Name()
	{
		return getObjectField(
			"rfc822Name",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline IkeRfc822AddrIdentification::IkeRfc822AddrIdentification(JString arg0)
		: android::net::ipsec::ike::IkeIdentification(
			"android.net.ipsec.ike.IkeRfc822AddrIdentification",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jboolean IkeRfc822AddrIdentification::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint IkeRfc822AddrIdentification::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike

// Base class headers
#include "./IkeIdentification.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::ipsec::ike;
#endif
