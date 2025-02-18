#pragma once

#include "./Flow.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint Flow::defaultBufferSize()
	{
		return callStaticMethod<jint>(
			"java.util.concurrent.Flow",
			"defaultBufferSize",
			"()I"
		);
	}
} // namespace java::util::concurrent

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent;
#endif
