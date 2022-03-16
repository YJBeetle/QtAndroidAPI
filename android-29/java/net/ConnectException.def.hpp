#pragma once

#include "./SocketException.def.hpp"

class JString;

namespace java::net
{
	class ConnectException : public java::net::SocketException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ConnectException(const char *className, const char *sig, Ts...agv) : java::net::SocketException(className, sig, std::forward<Ts>(agv)...) {}
		ConnectException(QJniObject obj) : java::net::SocketException(obj) {}
		
		// Constructors
		ConnectException();
		ConnectException(JString arg0);
		
		// Methods
	};
} // namespace java::net

