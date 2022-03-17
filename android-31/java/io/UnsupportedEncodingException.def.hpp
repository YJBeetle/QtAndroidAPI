#pragma once

#include "./IOException.def.hpp"

class JString;

namespace java::io
{
	class UnsupportedEncodingException : public java::io::IOException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnsupportedEncodingException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		UnsupportedEncodingException(QAndroidJniObject obj) : java::io::IOException(obj) {}
		
		// Constructors
		UnsupportedEncodingException();
		UnsupportedEncodingException(JString arg0);
		
		// Methods
	};
} // namespace java::io

