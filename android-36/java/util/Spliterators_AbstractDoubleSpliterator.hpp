#pragma once

#include "./Spliterators_AbstractDoubleSpliterator.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint Spliterators_AbstractDoubleSpliterator::characteristics() const
	{
		return callMethod<jint>(
			"characteristics",
			"()I"
		);
	}
	inline jlong Spliterators_AbstractDoubleSpliterator::estimateSize() const
	{
		return callMethod<jlong>(
			"estimateSize",
			"()J"
		);
	}
	inline JObject Spliterators_AbstractDoubleSpliterator::trySplit() const
	{
		return callObjectMethod(
			"trySplit",
			"()Ljava/util/Spliterator$OfDouble;"
		);
	}
} // namespace java::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
