#include "./Spliterators_AbstractDoubleSpliterator.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	
	// Methods
	jint Spliterators_AbstractDoubleSpliterator::characteristics() const
	{
		return callMethod<jint>(
			"characteristics",
			"()I"
		);
	}
	jlong Spliterators_AbstractDoubleSpliterator::estimateSize() const
	{
		return callMethod<jlong>(
			"estimateSize",
			"()J"
		);
	}
	JObject Spliterators_AbstractDoubleSpliterator::trySplit() const
	{
		return callObjectMethod(
			"trySplit",
			"()Ljava/util/Spliterator$OfDouble;"
		);
	}
} // namespace java::util

