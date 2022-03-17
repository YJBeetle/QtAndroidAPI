#pragma once

#include "./IOException.def.hpp"
#include "./ObjectInputStream.def.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./UncheckedIOException.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline UncheckedIOException::UncheckedIOException(java::io::IOException arg0)
		: java::lang::RuntimeException(
			"java.io.UncheckedIOException",
			"(Ljava/io/IOException;)V",
			arg0.object()
		) {}
	inline UncheckedIOException::UncheckedIOException(JString arg0, java::io::IOException arg1)
		: java::lang::RuntimeException(
			"java.io.UncheckedIOException",
			"(Ljava/lang/String;Ljava/io/IOException;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline java::io::IOException UncheckedIOException::getCause() const
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/io/IOException;"
		);
	}
} // namespace java::io

// Base class headers
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"

