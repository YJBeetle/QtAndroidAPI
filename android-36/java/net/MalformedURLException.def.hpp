#pragma once

#include "../io/IOException.def.hpp"

class JString;

namespace java::net
{
	class MalformedURLException : public java::io::IOException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MalformedURLException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		MalformedURLException(QJniObject obj) : java::io::IOException(obj) {}
		
		// Constructors
		MalformedURLException();
		MalformedURLException(JString arg0);
		
		// Methods
	};
} // namespace java::net

