#pragma once

#include "../../../../JIntArray.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./BlackLevelPattern.def.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	inline jint BlackLevelPattern::COUNT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.BlackLevelPattern",
			"COUNT"
		);
	}
	
	// Constructors
	
	// Methods
	inline void BlackLevelPattern::copyTo(JIntArray arg0, jint arg1) const
	{
		callMethod<void>(
			"copyTo",
			"([II)V",
			arg0.object<jintArray>(),
			arg1
		);
	}
	inline jboolean BlackLevelPattern::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint BlackLevelPattern::getOffsetForIndex(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getOffsetForIndex",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint BlackLevelPattern::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString BlackLevelPattern::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware::camera2::params

// Base class headers

