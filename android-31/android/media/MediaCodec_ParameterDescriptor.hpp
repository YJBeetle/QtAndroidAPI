#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./MediaCodec_ParameterDescriptor.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean MediaCodec_ParameterDescriptor::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString MediaCodec_ParameterDescriptor::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint MediaCodec_ParameterDescriptor::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jint MediaCodec_ParameterDescriptor::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::media

// Base class headers

