#include "./Spliterators_AbstractSpliterator.hpp"

namespace java::util
{
	// Fields
	
	Spliterators_AbstractSpliterator::Spliterators_AbstractSpliterator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint Spliterators_AbstractSpliterator::characteristics()
	{
		return __thiz.callMethod<jint>(
			"characteristics",
			"()I"
		);
	}
	jlong Spliterators_AbstractSpliterator::estimateSize()
	{
		return __thiz.callMethod<jlong>(
			"estimateSize",
			"()J"
		);
	}
	QAndroidJniObject Spliterators_AbstractSpliterator::trySplit()
	{
		return __thiz.callObjectMethod(
			"trySplit",
			"()Ljava/util/Spliterator;"
		);
	}
} // namespace java::util

