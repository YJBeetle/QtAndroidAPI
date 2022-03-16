#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Proxy_Type.def.hpp"

namespace java::net
{
	// Fields
	inline java::net::Proxy_Type Proxy_Type::DIRECT()
	{
		return getStaticObjectField(
			"java.net.Proxy$Type",
			"DIRECT",
			"Ljava/net/Proxy$Type;"
		);
	}
	inline java::net::Proxy_Type Proxy_Type::HTTP()
	{
		return getStaticObjectField(
			"java.net.Proxy$Type",
			"HTTP",
			"Ljava/net/Proxy$Type;"
		);
	}
	inline java::net::Proxy_Type Proxy_Type::SOCKS()
	{
		return getStaticObjectField(
			"java.net.Proxy$Type",
			"SOCKS",
			"Ljava/net/Proxy$Type;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::net::Proxy_Type Proxy_Type::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.Proxy$Type",
			"valueOf",
			"(Ljava/lang/String;)Ljava/net/Proxy$Type;",
			arg0.object<jstring>()
		);
	}
	inline JArray Proxy_Type::values()
	{
		return callStaticObjectMethod(
			"java.net.Proxy$Type",
			"values",
			"()[Ljava/net/Proxy$Type;"
		);
	}
} // namespace java::net

// Base class headers
#include "../lang/Enum.hpp"

