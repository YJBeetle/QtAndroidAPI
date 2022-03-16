#pragma once

#include "../../../../JByteArray.hpp"
#include "../../../../JObject.hpp"
#include "./IkeKeyIdIdentification.def.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	inline JByteArray IkeKeyIdIdentification::keyId()
	{
		return getObjectField(
			"keyId",
			"[B"
		);
	}
	
	// Constructors
	inline IkeKeyIdIdentification::IkeKeyIdIdentification(JByteArray arg0)
		: android::net::ipsec::ike::IkeIdentification(
			"android.net.ipsec.ike.IkeKeyIdIdentification",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	
	// Methods
	inline jboolean IkeKeyIdIdentification::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint IkeKeyIdIdentification::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike

// Base class headers
#include "./IkeIdentification.hpp"

