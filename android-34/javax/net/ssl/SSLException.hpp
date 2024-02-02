#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./SSLException.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	inline SSLException::SSLException(JString arg0)
		: java::io::IOException(
			"javax.net.ssl.SSLException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline SSLException::SSLException(JThrowable arg0)
		: java::io::IOException(
			"javax.net.ssl.SSLException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline SSLException::SSLException(JString arg0, JThrowable arg1)
		: java::io::IOException(
			"javax.net.ssl.SSLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace javax::net::ssl

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../../java/io/IOException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::net::ssl;
#endif
