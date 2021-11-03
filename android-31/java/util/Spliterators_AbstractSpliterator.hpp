#pragma once

#include "../../JObject.hpp"


namespace java::util
{
	class Spliterators_AbstractSpliterator : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Spliterators_AbstractSpliterator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Spliterators_AbstractSpliterator(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint characteristics();
		jlong estimateSize();
		JObject trySplit();
	};
} // namespace java::util

