#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class Spliterators_AbstractIntSpliterator : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Spliterators_AbstractIntSpliterator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Spliterators_AbstractIntSpliterator(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint characteristics();
		jlong estimateSize();
		QAndroidJniObject trySplit();
	};
} // namespace java::util

