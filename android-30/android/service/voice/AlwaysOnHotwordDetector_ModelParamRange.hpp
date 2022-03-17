#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AlwaysOnHotwordDetector_ModelParamRange.def.hpp"

namespace android::service::voice
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean AlwaysOnHotwordDetector_ModelParamRange::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint AlwaysOnHotwordDetector_ModelParamRange::getEnd() const
	{
		return callMethod<jint>(
			"getEnd",
			"()I"
		);
	}
	inline jint AlwaysOnHotwordDetector_ModelParamRange::getStart() const
	{
		return callMethod<jint>(
			"getStart",
			"()I"
		);
	}
	inline jint AlwaysOnHotwordDetector_ModelParamRange::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AlwaysOnHotwordDetector_ModelParamRange::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::service::voice

// Base class headers

