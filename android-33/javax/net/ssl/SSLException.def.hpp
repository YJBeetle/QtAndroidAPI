#pragma once

#include "../../../java/io/IOException.def.hpp"

class JString;
class JThrowable;

namespace javax::net::ssl
{
	class SSLException : public java::io::IOException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SSLException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		SSLException(QJniObject obj) : java::io::IOException(obj) {}
		
		// Constructors
		SSLException(JString arg0);
		SSLException(JThrowable arg0);
		SSLException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace javax::net::ssl

