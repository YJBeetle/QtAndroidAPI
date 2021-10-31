#include "./Spliterators_AbstractLongSpliterator.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	Spliterators_AbstractLongSpliterator::Spliterators_AbstractLongSpliterator(QJniObject obj) : __JniBaseClass(obj) {}
	
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
	__JniBaseClass Spliterators_AbstractLongSpliterator::trySplit()
	{
		return callObjectMethod(
			"trySplit",
			"()Ljava/util/Spliterator$OfLong;"
		);
	}
} // namespace java::util

