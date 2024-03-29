#pragma once

#include "./SocketException.def.hpp"

class JString;

namespace java::net
{
	class BindException : public java::net::SocketException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BindException(const char *className, const char *sig, Ts...agv) : java::net::SocketException(className, sig, std::forward<Ts>(agv)...) {}
		BindException(QJniObject obj) : java::net::SocketException(obj) {}
		
		// Constructors
		BindException();
		BindException(JString arg0);
		
		// Methods
	};
} // namespace java::net

