#include "./Spliterators_AbstractIntSpliterator.hpp"

namespace java::util
{
	// Fields
	
	Spliterators_AbstractIntSpliterator::Spliterators_AbstractIntSpliterator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint Spliterators_AbstractIntSpliterator::characteristics()
	{
		return __thiz.callMethod<jint>(
			"characteristics",
			"()I"
		);
	}
	jlong Spliterators_AbstractIntSpliterator::estimateSize()
	{
		return __thiz.callMethod<jlong>(
			"estimateSize",
			"()J"
		);
	}
	QAndroidJniObject Spliterators_AbstractIntSpliterator::trySplit()
	{
		return __thiz.callObjectMethod(
			"trySplit",
			"()Ljava/util/Spliterator$OfInt;"
		);
	}
} // namespace java::util

