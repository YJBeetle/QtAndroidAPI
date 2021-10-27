#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/io/IOException.hpp"


namespace javax::net::ssl
{
	class SSLException : public java::io::IOException
	{
	public:
		// Fields
		
		SSLException(QAndroidJniObject obj);
		// Constructors
		SSLException(jstring &arg0);
		SSLException(const QString &arg0);
		SSLException(jthrowable &arg0);
		SSLException(jstring &arg0, jthrowable &arg1);
		SSLException(const QString &arg0, jthrowable &arg1);
		SSLException() = default;
		
		// Methods
	};
} // namespace javax::net::ssl

