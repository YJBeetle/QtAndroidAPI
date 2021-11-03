#pragma once

#include "../../JObject.hpp"

namespace java::util
{
	class Spliterators_AbstractDoubleSpliterator : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Spliterators_AbstractDoubleSpliterator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Spliterators_AbstractDoubleSpliterator(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint characteristics();
		jlong estimateSize();
		JObject trySplit();
	};
} // namespace java::util

