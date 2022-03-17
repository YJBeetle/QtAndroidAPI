#pragma once

#include "./LocalSocketAddress_Namespace.def.hpp"
#include "../../JString.hpp"
#include "./LocalSocketAddress.def.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	inline LocalSocketAddress::LocalSocketAddress(JString arg0)
		: JObject(
			"android.net.LocalSocketAddress",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline LocalSocketAddress::LocalSocketAddress(JString arg0, android::net::LocalSocketAddress_Namespace arg1)
		: JObject(
			"android.net.LocalSocketAddress",
			"(Ljava/lang/String;Landroid/net/LocalSocketAddress$Namespace;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline JString LocalSocketAddress::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::LocalSocketAddress_Namespace LocalSocketAddress::getNamespace() const
	{
		return callObjectMethod(
			"getNamespace",
			"()Landroid/net/LocalSocketAddress$Namespace;"
		);
	}
} // namespace android::net

// Base class headers

