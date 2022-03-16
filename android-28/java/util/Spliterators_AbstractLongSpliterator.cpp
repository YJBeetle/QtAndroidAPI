#include "./Spliterators_AbstractLongSpliterator.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	
	// Methods
	jint Spliterators_AbstractLongSpliterator::characteristics() const
	{
		return callMethod<jint>(
			"characteristics",
			"()I"
		);
	}
	jlong Spliterators_AbstractLongSpliterator::estimateSize() const
	{
		return callMethod<jlong>(
			"estimateSize",
			"()J"
		);
	}
	JObject Spliterators_AbstractLongSpliterator::trySplit() const
	{
		return callObjectMethod(
			"trySplit",
			"()Ljava/util/Spliterator$OfLong;"
		);
	}
} // namespace java::util

