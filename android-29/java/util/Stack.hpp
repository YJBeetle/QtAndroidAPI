#pragma once

#include "../../JObject.hpp"
#include "./Stack.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline Stack::Stack()
		: java::util::Vector(
			"java.util.Stack",
			"()V"
		) {}
	
	// Methods
	inline jboolean Stack::empty() const
	{
		return callMethod<jboolean>(
			"empty",
			"()Z"
		);
	}
	inline JObject Stack::peek() const
	{
		return callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject Stack::pop() const
	{
		return callObjectMethod(
			"pop",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject Stack::push(JObject arg0) const
	{
		return callObjectMethod(
			"push",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline jint Stack::search(JObject arg0) const
	{
		return callMethod<jint>(
			"search",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
} // namespace java::util

// Base class headers
#include "./AbstractCollection.hpp"
#include "./AbstractList.hpp"
#include "./Vector.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
