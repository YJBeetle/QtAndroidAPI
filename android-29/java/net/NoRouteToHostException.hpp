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
		
		NoRouteToHostException(QAndroidJniObject obj);
		// Constructors
		NoRouteToHostException();
		NoRouteToHostException(jstring arg0);
		
		// Methods
	};
} // namespace java::net

