#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./SocketException.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline SocketException::SocketException()
		: java::io::IOException(
			"java.net.SocketException",
			"()V"
		) {}
	inline SocketException::SocketException(JString arg0)
		: java::io::IOException(
			"java.net.SocketException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline SocketException::SocketException(JThrowable arg0)
		: java::io::IOException(
			"java.net.SocketException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline SocketException::SocketException(JString arg0, JThrowable arg1)
		: java::io::IOException(
			"java.net.SocketException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::net

// Base class headers
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::net;
#endif
