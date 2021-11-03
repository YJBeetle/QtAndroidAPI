#include "./Spliterators_AbstractLongSpliterator.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	Spliterators_AbstractLongSpliterator::Spliterators_AbstractLongSpliterator(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Spliterators_AbstractLongSpliterator::characteristics()
	{
		return callMethod<jint>(
			"characteristics",
			"()I"
		);
	}
	jlong Spliterators_AbstractLongSpliterator::estimateSize()
	{
		return callMethod<jlong>(
			"estimateSize",
			"()J"
		);
	}
	JObject Spliterators_AbstractLongSpliterator::trySplit()
	{
		return callObjectMethod(
			"trySplit",
			"()Ljava/util/Spliterator$OfLong;"
		);
	}
} // namespace java::util

