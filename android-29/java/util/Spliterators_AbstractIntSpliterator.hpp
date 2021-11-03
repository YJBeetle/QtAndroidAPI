#pragma once

#include "../../JObject.hpp"


namespace java::util
{
	class Spliterators_AbstractIntSpliterator : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Spliterators_AbstractIntSpliterator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Spliterators_AbstractIntSpliterator(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint characteristics();
		jlong estimateSize();
		JObject trySplit();
	};
} // namespace java::util

