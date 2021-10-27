#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"
#include "./SocketException.hpp"


namespace java::net
{
	class PortUnreachableException : public java::net::SocketException
	{
	public:
		// Fields
		
		PortUnreachableException(QAndroidJniObject obj);
		// Constructors
		PortUnreachableException();
		PortUnreachableException(jstring &arg0);
		PortUnreachableException(const QString &arg0);
		
		// Methods
	};
} // namespace java::net

