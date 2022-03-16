#pragma once

#include "./Spliterators_AbstractLongSpliterator.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint Spliterators_AbstractLongSpliterator::characteristics() const
	{
		return callMethod<jint>(
			"characteristics",
			"()I"
		);
	}
	inline jlong Spliterators_AbstractLongSpliterator::estimateSize() const
	{
		return callMethod<jlong>(
			"estimateSize",
			"()J"
		);
	}
	inline JObject Spliterators_AbstractLongSpliterator::trySplit() const
	{
		return callObjectMethod(
			"trySplit",
			"()Ljava/util/Spliterator$OfLong;"
		);
	}
} // namespace java::util

// Base class headers

