#pragma once

#include "../../../../JString.hpp"
#include "./ConnectTimeoutException.def.hpp"

namespace org::apache::http::conn
{
	// Fields
	
	// Constructors
	inline ConnectTimeoutException::ConnectTimeoutException()
		: java::io::InterruptedIOException(
			"org.apache.http.conn.ConnectTimeoutException",
			"()V"
		) {}
	inline ConnectTimeoutException::ConnectTimeoutException(JString arg0)
		: java::io::InterruptedIOException(
			"org.apache.http.conn.ConnectTimeoutException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace org::apache::http::conn

// Base class headers
#include "../../../../java/lang/Exception.hpp"
#include "../../../../java/io/IOException.hpp"
#include "../../../../java/io/InterruptedIOException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace org::apache::http::conn;
#endif
