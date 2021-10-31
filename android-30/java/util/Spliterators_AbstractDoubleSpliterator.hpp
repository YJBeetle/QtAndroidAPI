#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class Spliterators_AbstractDoubleSpliterator : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Spliterators_AbstractDoubleSpliterator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Spliterators_AbstractDoubleSpliterator(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint characteristics();
		jlong estimateSize();
		__JniBaseClass trySplit();
	};
} // namespace java::util

