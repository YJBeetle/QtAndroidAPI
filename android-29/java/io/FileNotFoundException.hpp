#pragma once

#include "../../JString.hpp"
#include "./FileNotFoundException.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline FileNotFoundException::FileNotFoundException()
		: java::io::IOException(
			"java.io.FileNotFoundException",
			"()V"
		) {}
	inline FileNotFoundException::FileNotFoundException(JString arg0)
		: java::io::IOException(
			"java.io.FileNotFoundException",
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
