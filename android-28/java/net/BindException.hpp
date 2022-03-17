#pragma once

#include "../../JString.hpp"
#include "./BindException.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline BindException::BindException()
		: java::net::SocketException(
			"java.net.BindException",
			"()V"
		) {}
	inline BindException::BindException(JString arg0)
		: java::net::SocketException(
			"java.net.BindException",
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
