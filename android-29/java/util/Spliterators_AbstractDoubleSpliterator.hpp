#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class Spliterators_AbstractDoubleSpliterator : public __JniBaseClass
	{
	public:
		// Fields
		
		Spliterators_AbstractDoubleSpliterator(QAndroidJniObject obj);
		// Constructors
		Spliterators_AbstractDoubleSpliterator() = default;
		
		// Methods
		jint characteristics();
		jlong estimateSize();
		QAndroidJniObject trySplit();
	};
} // namespace java::util

