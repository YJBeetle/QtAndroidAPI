#include "./Spliterators_AbstractIntSpliterator.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	Spliterators_AbstractIntSpliterator::Spliterators_AbstractIntSpliterator(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint Spliterators_AbstractIntSpliterator::characteristics()
	{
		return callMethod<jint>(
			"characteristics",
			"()I"
		);
	}
	jlong Spliterators_AbstractIntSpliterator::estimateSize()
	{
		return callMethod<jlong>(
			"estimateSize",
			"()J"
		);
	}
	__JniBaseClass Spliterators_AbstractIntSpliterator::trySplit()
	{
		return callObjectMethod(
			"trySplit",
			"()Ljava/util/Spliterator$OfInt;"
		);
	}
} // namespace java::util

