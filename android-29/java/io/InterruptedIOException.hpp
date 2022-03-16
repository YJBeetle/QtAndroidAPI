#pragma once

#include "../../JString.hpp"
#include "./InterruptedIOException.def.hpp"

namespace java::io
{
	// Fields
	inline jint InterruptedIOException::bytesTransferred()
	{
		return getField<jint>(
			"bytesTransferred"
		);
	}
	
	// Constructors
	inline InterruptedIOException::InterruptedIOException()
		: java::io::IOException(
			"java.io.InterruptedIOException",
			"()V"
		) {}
	inline InterruptedIOException::InterruptedIOException(JString arg0)
		: java::io::IOException(
			"java.io.InterruptedIOException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::io

// Base class headers
#include "../lang/Exception.hpp"
#include "./IOException.hpp"

