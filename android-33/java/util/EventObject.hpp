#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./EventObject.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline EventObject::EventObject(JObject arg0)
		: JObject(
			"java.util.EventObject",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		) {}
	
	// Methods
	inline JObject EventObject::getSource() const
	{
		return callObjectMethod(
			"getSource",
			"()Ljava/lang/Object;"
		);
	}
	inline JString EventObject::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
