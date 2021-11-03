#pragma once

#include "./IOException.hpp"

class JString;

namespace java::io
{
	class UnsupportedEncodingException : public java::io::IOException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnsupportedEncodingException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		UnsupportedEncodingException(QJniObject obj);
		
		// Constructors
		UnsupportedEncodingException();
		UnsupportedEncodingException(JString arg0);
		
		// Methods
	};
} // namespace java::io

