#pragma once

#include "../io/IOException.hpp"

class JString;

namespace java::net
{
	class ProtocolException : public java::io::IOException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ProtocolException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		ProtocolException(QJniObject obj);
		
		// Constructors
		ProtocolException();
		ProtocolException(JString arg0);
		
		// Methods
	};
} // namespace java::net

