#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Authenticator_RequestorType.def.hpp"

namespace java::net
{
	// Fields
	inline java::net::Authenticator_RequestorType Authenticator_RequestorType::PROXY()
	{
		return getStaticObjectField(
			"java.net.Authenticator$RequestorType",
			"PROXY",
			"Ljava/net/Authenticator$RequestorType;"
		);
	}
	inline java::net::Authenticator_RequestorType Authenticator_RequestorType::SERVER()
	{
		return getStaticObjectField(
			"java.net.Authenticator$RequestorType",
			"SERVER",
			"Ljava/net/Authenticator$RequestorType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::net::Authenticator_RequestorType Authenticator_RequestorType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.Authenticator$RequestorType",
			"valueOf",
			"(Ljava/lang/String;)Ljava/net/Authenticator$RequestorType;",
			arg0.object<jstring>()
		);
	}
	inline JArray Authenticator_RequestorType::values()
	{
		return callStaticObjectMethod(
			"java.net.Authenticator$RequestorType",
			"values",
			"()[Ljava/net/Authenticator$RequestorType;"
		);
	}
} // namespace java::net

// Base class headers
#include "../lang/Enum.hpp"

