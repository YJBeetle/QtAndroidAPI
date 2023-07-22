#pragma once

#include "./IOException.def.hpp"

class JString;

namespace java::io
{
	class InterruptedIOException : public java::io::IOException
	{
	public:
		// Fields
		jint bytesTransferred();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InterruptedIOException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		InterruptedIOException(QAndroidJniObject obj) : java::io::IOException(obj) {}
		
		// Constructors
		InterruptedIOException();
		InterruptedIOException(JString arg0);
		
		// Methods
	};
} // namespace java::io

