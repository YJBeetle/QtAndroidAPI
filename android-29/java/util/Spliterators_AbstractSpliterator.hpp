#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class Spliterators_AbstractSpliterator : public __JniBaseClass
	{
	public:
		// Fields
		
		Spliterators_AbstractSpliterator(QAndroidJniObject obj);
		// Constructors
		Spliterators_AbstractSpliterator() = default;
		
		// Methods
		jint characteristics();
		jlong estimateSize();
		QAndroidJniObject trySplit();
	};
} // namespace java::util

