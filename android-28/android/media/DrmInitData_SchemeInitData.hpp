#pragma once

#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./DrmInitData_SchemeInitData.def.hpp"

namespace android::media
{
	// Fields
	inline JByteArray DrmInitData_SchemeInitData::data()
	{
		return getObjectField(
			"data",
			"[B"
		);
	}
	inline JString DrmInitData_SchemeInitData::mimeType()
	{
		return getObjectField(
			"mimeType",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean DrmInitData_SchemeInitData::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint DrmInitData_SchemeInitData::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::media

// Base class headers

