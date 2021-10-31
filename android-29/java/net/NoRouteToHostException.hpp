#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"
#include "./SocketException.hpp"


namespace java::net
{
	class NoRouteToHostException : public java::net::SocketException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NoRouteToHostException(const char *className, const char *sig, Ts...agv) : java::net::SocketException(className, sig, std::forward<Ts>(agv)...) {}
		NoRouteToHostException(QAndroidJniObject obj);
		
		// Constructors
		NoRouteToHostException();
		NoRouteToHostException(jstring arg0);
		
		// Methods
	};
} // namespace java::net

