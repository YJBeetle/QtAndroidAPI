#pragma once

#include "./Spliterators_AbstractIntSpliterator.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint Spliterators_AbstractIntSpliterator::characteristics() const
	{
		return callMethod<jint>(
			"characteristics",
			"()I"
		);
	}
	inline jlong Spliterators_AbstractIntSpliterator::estimateSize() const
	{
		return callMethod<jlong>(
			"estimateSize",
			"()J"
		);
	}
	inline JObject Spliterators_AbstractIntSpliterator::trySplit() const
	{
		return callObjectMethod(
			"trySplit",
			"()Ljava/util/Spliterator$OfInt;"
		);
	}
} // namespace java::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
