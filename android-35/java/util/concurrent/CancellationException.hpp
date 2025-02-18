#pragma once

#include "../../../JString.hpp"
#include "./CancellationException.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline CancellationException::CancellationException()
		: java::lang::IllegalStateException(
			"java.util.concurrent.CancellationException",
			"()V"
		) {}
	inline CancellationException::CancellationException(JString arg0)
		: java::lang::IllegalStateException(
			"java.util.concurrent.CancellationException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::util::concurrent

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent;
#endif
