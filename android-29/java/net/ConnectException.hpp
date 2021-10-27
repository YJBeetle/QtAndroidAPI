#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"
#include "./SocketException.hpp"


namespace java::net
{
	class ConnectException : public java::net::SocketException
	{
	public:
		// Fields
		
		ConnectException(QAndroidJniObject obj);
		// Constructors
		ConnectException();
		ConnectException(jstring &arg0);
		ConnectException(const QString &arg0);
		
		// Methods
	};
} // namespace java::net

