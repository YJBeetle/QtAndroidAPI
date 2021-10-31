#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "../../../../java/lang/Exception.hpp"
#include "../../../../java/io/IOException.hpp"
#include "../../../../java/io/InterruptedIOException.hpp"


namespace org::apache::http::conn
{
	class ConnectTimeoutException : public java::io::InterruptedIOException
	{
	public:
		// Fields
		
		ConnectTimeoutException(QAndroidJniObject obj);
		// Constructors
		ConnectTimeoutException();
		ConnectTimeoutException(jstring arg0);
		
		// Methods
	};
} // namespace org::apache::http::conn

