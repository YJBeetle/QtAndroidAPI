#pragma once

#include "./Spliterators_AbstractSpliterator.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint Spliterators_AbstractSpliterator::characteristics() const
	{
		return callMethod<jint>(
			"characteristics",
			"()I"
		);
	}
	inline jlong Spliterators_AbstractSpliterator::estimateSize() const
	{
		return callMethod<jlong>(
			"estimateSize",
			"()J"
		);
	}
	inline JObject Spliterators_AbstractSpliterator::trySplit() const
	{
		return callObjectMethod(
			"trySplit",
			"()Ljava/util/Spliterator;"
		);
	}
} // namespace java::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
