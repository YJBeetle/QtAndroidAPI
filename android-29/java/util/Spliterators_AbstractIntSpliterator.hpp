#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class Spliterators_AbstractIntSpliterator : public __JniBaseClass
	{
	public:
		// Fields
		
		Spliterators_AbstractIntSpliterator(QAndroidJniObject obj);
		// Constructors
		Spliterators_AbstractIntSpliterator() = default;
		
		// Methods
		jint characteristics();
		jlong estimateSize();
		QAndroidJniObject trySplit();
	};
} // namespace java::util

