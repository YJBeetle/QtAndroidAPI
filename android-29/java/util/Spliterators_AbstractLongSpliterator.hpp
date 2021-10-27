#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class Spliterators_AbstractLongSpliterator : public __JniBaseClass
	{
	public:
		// Fields
		
		Spliterators_AbstractLongSpliterator(QAndroidJniObject obj);
		// Constructors
		Spliterators_AbstractLongSpliterator() = default;
		
		// Methods
		jint characteristics();
		jlong estimateSize();
		QAndroidJniObject trySplit();
	};
} // namespace java::util

