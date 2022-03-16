#pragma once

#include "./SocketException.hpp"

class JString;

namespace java::net
{
	class PortUnreachableException : public java::net::SocketException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PortUnreachableException(const char *className, const char *sig, Ts...agv) : java::net::SocketException(className, sig, std::forward<Ts>(agv)...) {}
		PortUnreachableException(QAndroidJniObject obj) : java::net::SocketException(obj) {}
		
		// Constructors
		PortUnreachableException();
		PortUnreachableException(JString arg0);
		
		// Methods
	};
} // namespace java::net

