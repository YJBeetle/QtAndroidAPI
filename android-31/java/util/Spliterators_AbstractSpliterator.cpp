#include "./Spliterators_AbstractSpliterator.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	Spliterators_AbstractSpliterator::Spliterators_AbstractSpliterator(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Spliterators_AbstractSpliterator::characteristics()
	{
		return callMethod<jint>(
			"characteristics",
			"()I"
		);
	}
	jlong Spliterators_AbstractSpliterator::estimateSize()
	{
		return callMethod<jlong>(
			"estimateSize",
			"()J"
		);
	}
	JObject Spliterators_AbstractSpliterator::trySplit()
	{
		return callObjectMethod(
			"trySplit",
			"()Ljava/util/Spliterator;"
		);
	}
} // namespace java::util

