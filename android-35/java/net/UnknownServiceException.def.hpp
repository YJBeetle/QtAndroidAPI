#pragma once

#include "../io/IOException.def.hpp"

class JString;

namespace java::net
{
	class UnknownServiceException : public java::io::IOException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnknownServiceException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		UnknownServiceException(QJniObject obj) : java::io::IOException(obj) {}
		
		// Constructors
		UnknownServiceException();
		UnknownServiceException(JString arg0);
		
		// Methods
	};
} // namespace java::net

