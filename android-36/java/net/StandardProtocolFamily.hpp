#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./StandardProtocolFamily.def.hpp"

namespace java::net
{
	// Fields
	inline java::net::StandardProtocolFamily StandardProtocolFamily::INET()
	{
		return getStaticObjectField(
			"java.net.StandardProtocolFamily",
			"INET",
			"Ljava/net/StandardProtocolFamily;"
		);
	}
	inline java::net::StandardProtocolFamily StandardProtocolFamily::INET6()
	{
		return getStaticObjectField(
			"java.net.StandardProtocolFamily",
			"INET6",
			"Ljava/net/StandardProtocolFamily;"
		);
	}
	inline java::net::StandardProtocolFamily StandardProtocolFamily::UNIX()
	{
		return getStaticObjectField(
			"java.net.StandardProtocolFamily",
			"UNIX",
			"Ljava/net/StandardProtocolFamily;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::net::StandardProtocolFamily StandardProtocolFamily::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.StandardProtocolFamily",
			"valueOf",
			"(Ljava/lang/String;)Ljava/net/StandardProtocolFamily;",
			arg0.object<jstring>()
		);
	}
	inline JArray StandardProtocolFamily::values()
	{
		return callStaticObjectMethod(
			"java.net.StandardProtocolFamily",
			"values",
			"()[Ljava/net/StandardProtocolFamily;"
		);
	}
} // namespace java::net

// Base class headers
#include "../lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::net;
#endif
