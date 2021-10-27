#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"


namespace java::net
{
	class SocketException : public java::io::IOException
	{
	public:
		// Fields
		
		SocketException(QAndroidJniObject obj);
		// Constructors
		SocketException();
		SocketException(jstring &arg0);
		SocketException(const QString &arg0);
		
		// Methods
	};
} // namespace java::net

