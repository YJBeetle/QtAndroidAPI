#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class Spliterators_AbstractLongSpliterator : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Spliterators_AbstractLongSpliterator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Spliterators_AbstractLongSpliterator(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint characteristics();
		jlong estimateSize();
		__JniBaseClass trySplit();
	};
} // namespace java::util

