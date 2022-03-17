#pragma once

#include "../../JString.hpp"
#include "./UnknownServiceException.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline UnknownServiceException::UnknownServiceException()
		: java::io::IOException(
			"java.net.UnknownServiceException",
			"()V"
		) {}
	inline UnknownServiceException::UnknownServiceException(JString arg0)
		: java::io::IOException(
			"java.net.UnknownServiceException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::net

// Base class headers
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::net;
#endif
