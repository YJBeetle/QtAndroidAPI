#pragma once

#include "../../JString.hpp"
#include "./SocketTimeoutException.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline SocketTimeoutException::SocketTimeoutException()
		: java::io::InterruptedIOException(
			"java.net.SocketTimeoutException",
			"()V"
		) {}
	inline SocketTimeoutException::SocketTimeoutException(JString arg0)
		: java::io::InterruptedIOException(
			"java.net.SocketTimeoutException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::net

// Base class headers
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"
#include "../io/InterruptedIOException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::net;
#endif
