#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./IOException.hpp"


namespace java::io
{
	class InterruptedIOException : public java::io::IOException
	{
	public:
		// Fields
		jint bytesTransferred();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InterruptedIOException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		InterruptedIOException(QAndroidJniObject obj);
		
		// Constructors
		InterruptedIOException();
		InterruptedIOException(jstring arg0);
		
		// Methods
	};
} // namespace java::io

