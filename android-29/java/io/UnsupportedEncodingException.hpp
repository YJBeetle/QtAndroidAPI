#pragma once

#include "../../JString.hpp"
#include "./UnsupportedEncodingException.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline UnsupportedEncodingException::UnsupportedEncodingException()
		: java::io::IOException(
			"java.io.UnsupportedEncodingException",
			"()V"
		) {}
	inline UnsupportedEncodingException::UnsupportedEncodingException(JString arg0)
		: java::io::IOException(
			"java.io.UnsupportedEncodingException",
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
