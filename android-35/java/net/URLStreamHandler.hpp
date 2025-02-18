#pragma once

#include "../../JString.hpp"
#include "./InetAddress.def.hpp"
#include "./Proxy.def.hpp"
#include "./URL.def.hpp"
#include "./URLConnection.def.hpp"
#include "./URLStreamHandler.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline URLStreamHandler::URLStreamHandler()
		: JObject(
			"java.net.URLStreamHandler",
			"()V"
		) {}
	
	// Methods
} // namespace java::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::net;
#endif
