#pragma once

#include "../io/IOException.def.hpp"

class JString;

namespace java::net
{
	class UnknownHostException : public java::io::IOException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnknownHostException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		UnknownHostException(QAndroidJniObject obj) : java::io::IOException(obj) {}
		
		// Constructors
		UnknownHostException();
		UnknownHostException(JString arg0);
		
		// Methods
	};
} // namespace java::net

