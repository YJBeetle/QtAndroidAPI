#include "./Spliterators_AbstractDoubleSpliterator.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	Spliterators_AbstractDoubleSpliterator::Spliterators_AbstractDoubleSpliterator(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Spliterators_AbstractDoubleSpliterator::characteristics()
	{
		return callMethod<jint>(
			"characteristics",
			"()I"
		);
	}
	jlong Spliterators_AbstractDoubleSpliterator::estimateSize()
	{
		return callMethod<jlong>(
			"estimateSize",
			"()J"
		);
	}
	JObject Spliterators_AbstractDoubleSpliterator::trySplit()
	{
		return callObjectMethod(
			"trySplit",
			"()Ljava/util/Spliterator$OfDouble;"
		);
	}
} // namespace java::util

