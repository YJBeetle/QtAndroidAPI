#pragma once

#include "./SocketException.hpp"

class JString;

namespace java::net
{
	class ConnectException : public java::net::SocketException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConnectException(const char *className, const char *sig, Ts...agv) : java::net::SocketException(className, sig, std::forward<Ts>(agv)...) {}
		ConnectException(QAndroidJniObject obj);
		
		// Constructors
		ConnectException();
		ConnectException(JString arg0);
		
		// Methods
	};
} // namespace java::net

