#pragma once

#include "./SocketException.hpp"

class JString;

namespace java::net
{
	class NoRouteToHostException : public java::net::SocketException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NoRouteToHostException(const char *className, const char *sig, Ts...agv) : java::net::SocketException(className, sig, std::forward<Ts>(agv)...) {}
		NoRouteToHostException(QAndroidJniObject obj) : java::net::SocketException(obj) {}
		
		// Constructors
		NoRouteToHostException();
		NoRouteToHostException(JString arg0);
		
		// Methods
	};
} // namespace java::net

