#pragma once

#include "../../../JString.hpp"
#include "./BrokenBarrierException.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline BrokenBarrierException::BrokenBarrierException()
		: java::lang::Exception(
			"java.util.concurrent.BrokenBarrierException",
			"()V"
		) {}
	inline BrokenBarrierException::BrokenBarrierException(JString arg0)
		: java::lang::Exception(
			"java.util.concurrent.BrokenBarrierException",
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
