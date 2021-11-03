#include "../../../../JString.hpp"
#include "./ConnectTimeoutException.hpp"

namespace org::apache::http::conn
{
	// Fields
	
	// QAndroidJniObject forward
	ConnectTimeoutException::ConnectTimeoutException(QAndroidJniObject obj) : java::io::InterruptedIOException(obj) {}
	
	// Constructors
	ConnectTimeoutException::ConnectTimeoutException()
		: java::io::InterruptedIOException(
			"org.apache.http.conn.ConnectTimeoutException",
			"()V"
		) {}
	ConnectTimeoutException::ConnectTimeoutException(JString arg0)
		: java::io::InterruptedIOException(
			"org.apache.http.conn.ConnectTimeoutException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace org::apache::http::conn

