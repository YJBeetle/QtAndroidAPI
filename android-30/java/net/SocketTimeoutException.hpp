#pragma once

#include "../io/InterruptedIOException.hpp"

class JString;

namespace java::net
{
	class SocketTimeoutException : public java::io::InterruptedIOException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SocketTimeoutException(const char *className, const char *sig, Ts...agv) : java::io::InterruptedIOException(className, sig, std::forward<Ts>(agv)...) {}
		SocketTimeoutException(QJniObject obj);
		
		// Constructors
		SocketTimeoutException();
		SocketTimeoutException(JString arg0);
		
		// Methods
	};
} // namespace java::net

