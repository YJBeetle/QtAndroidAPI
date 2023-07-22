#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Character_Subset.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean Character_Subset::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Character_Subset::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Character_Subset::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
