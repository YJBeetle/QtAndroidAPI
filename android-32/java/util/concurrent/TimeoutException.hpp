#pragma once

#include "../../../JString.hpp"
#include "./TimeoutException.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline TimeoutException::TimeoutException()
		: java::lang::Exception(
			"java.util.concurrent.TimeoutException",
			"()V"
		) {}
	inline TimeoutException::TimeoutException(JString arg0)
		: java::lang::Exception(
			"java.util.concurrent.TimeoutException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::util::concurrent

// Base class headers
#include "../../lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent;
#endif
