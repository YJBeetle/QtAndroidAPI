#pragma once

#include "../../JObject.hpp"
#include "./AbstractSet.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean AbstractSet::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint AbstractSet::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean AbstractSet::removeAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
} // namespace java::util

// Base class headers
#include "./AbstractCollection.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
