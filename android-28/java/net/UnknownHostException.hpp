#pragma once

#include "../io/IOException.hpp"

class JString;

namespace java::net
{
	class UnknownHostException : public java::io::IOException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnknownHostException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		UnknownHostException(QJniObject obj);
		
		// Constructors
		UnknownHostException();
		UnknownHostException(JString arg0);
		
		// Methods
	};
} // namespace java::net

