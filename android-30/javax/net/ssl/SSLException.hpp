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
		
		// QJniObject forward
		template<typename ...Ts> explicit SSLException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		SSLException(QJniObject obj);
		
		// Constructors
		SSLException(jstring arg0);
		SSLException(jthrowable arg0);
		SSLException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace javax::net::ssl

