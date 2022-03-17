#pragma once

#include "../../JString.hpp"
#include "./TooManyListenersException.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline TooManyListenersException::TooManyListenersException()
		: java::lang::Exception(
			"java.util.TooManyListenersException",
			"()V"
		) {}
	inline TooManyListenersException::TooManyListenersException(JString arg0)
		: java::lang::Exception(
			"java.util.TooManyListenersException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::util

// Base class headers
#include "../lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
