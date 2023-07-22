#pragma once

#include "../io/IOException.def.hpp"

class JString;
class JThrowable;

namespace java::net
{
	class SocketException : public java::io::IOException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SocketException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		SocketException(QJniObject obj) : java::io::IOException(obj) {}
		
		// Constructors
		SocketException();
		SocketException(JString arg0);
		SocketException(JThrowable arg0);
		SocketException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::net

