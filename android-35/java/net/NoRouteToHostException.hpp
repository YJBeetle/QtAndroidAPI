#pragma once

#include "../../JString.hpp"
#include "./NoRouteToHostException.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline NoRouteToHostException::NoRouteToHostException()
		: java::net::SocketException(
			"java.net.NoRouteToHostException",
			"()V"
		) {}
	inline NoRouteToHostException::NoRouteToHostException(JString arg0)
		: java::net::SocketException(
			"java.net.NoRouteToHostException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::net

// Base class headers
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"
#include "./SocketException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::net;
#endif
