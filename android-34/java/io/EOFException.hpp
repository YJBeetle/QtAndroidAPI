#pragma once

#include "../../JString.hpp"
#include "./EOFException.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline EOFException::EOFException()
		: java::io::IOException(
			"java.io.EOFException",
			"()V"
		) {}
	inline EOFException::EOFException(JString arg0)
		: java::io::IOException(
			"java.io.EOFException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::io

// Base class headers
#include "../lang/Exception.hpp"
#include "./IOException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif
