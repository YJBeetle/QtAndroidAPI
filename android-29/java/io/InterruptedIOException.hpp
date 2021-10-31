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
		
		InterruptedIOException(QAndroidJniObject obj);
		// Constructors
		InterruptedIOException();
		InterruptedIOException(jstring arg0);
		
		// Methods
	};
} // namespace java::io

