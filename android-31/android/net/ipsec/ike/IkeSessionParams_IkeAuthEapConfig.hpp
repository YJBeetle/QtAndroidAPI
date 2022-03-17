#pragma once

#include "../../eap/EapSessionConfig.def.hpp"
#include "../../../../JObject.hpp"
#include "./IkeSessionParams_IkeAuthEapConfig.def.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean IkeSessionParams_IkeAuthEapConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::net::eap::EapSessionConfig IkeSessionParams_IkeAuthEapConfig::getEapConfig() const
	{
		return callObjectMethod(
			"getEapConfig",
			"()Landroid/net/eap/EapSessionConfig;"
		);
	}
	inline jint IkeSessionParams_IkeAuthEapConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike

// Base class headers
#include "./IkeSessionParams_IkeAuthConfig.hpp"

