#pragma once

#include "../../JString.hpp"
#include "./UTFDataFormatException.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline UTFDataFormatException::UTFDataFormatException()
		: java::io::IOException(
			"java.io.UTFDataFormatException",
			"()V"
		) {}
	inline UTFDataFormatException::UTFDataFormatException(JString arg0)
		: java::io::IOException(
			"java.io.UTFDataFormatException",
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
