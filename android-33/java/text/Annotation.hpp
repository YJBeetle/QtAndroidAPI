#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Annotation.def.hpp"

namespace java::text
{
	// Fields
	
	// Constructors
	inline Annotation::Annotation(JObject arg0)
		: JObject(
			"java.text.Annotation",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		) {}
	
	// Methods
	inline JObject Annotation::getValue() const
	{
		return callObjectMethod(
			"getValue",
			"()Ljava/lang/Object;"
		);
	}
	inline JString Annotation::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::text;
#endif
