#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"
#include "../io/InterruptedIOException.hpp"


namespace java::net
{
	class SocketTimeoutException : public java::io::InterruptedIOException
	{
	public:
		// Fields
		
		SocketTimeoutException(QAndroidJniObject obj);
		// Constructors
		SocketTimeoutException();
		SocketTimeoutException(jstring &arg0);
		SocketTimeoutException(const QString &arg0);
		
		// Methods
	};
} // namespace java::net

