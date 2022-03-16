#pragma once

#include "../../../../java/io/InterruptedIOException.hpp"

class JString;

namespace org::apache::http::conn
{
	class ConnectTimeoutException : public java::io::InterruptedIOException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConnectTimeoutException(const char *className, const char *sig, Ts...agv) : java::io::InterruptedIOException(className, sig, std::forward<Ts>(agv)...) {}
		ConnectTimeoutException(QAndroidJniObject obj) : java::io::InterruptedIOException(obj) {}
		
		// Constructors
		ConnectTimeoutException();
		ConnectTimeoutException(JString arg0);
		
		// Methods
	};
} // namespace org::apache::http::conn

