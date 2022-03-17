#pragma once

#include "../../JString.hpp"
#include "./MalformedJsonException.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline MalformedJsonException::MalformedJsonException(JString arg0)
		: java::io::IOException(
			"android.util.MalformedJsonException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::util

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/io/IOException.hpp"

