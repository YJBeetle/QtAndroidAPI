#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"
#include "./SocketException.hpp"


namespace java::net
{
	class BindException : public java::net::SocketException
	{
	public:
		// Fields
		
		BindException(QAndroidJniObject obj);
		// Constructors
		BindException();
		BindException(jstring &arg0);
		BindException(const QString &arg0);
		
		// Methods
	};
} // namespace java::net

