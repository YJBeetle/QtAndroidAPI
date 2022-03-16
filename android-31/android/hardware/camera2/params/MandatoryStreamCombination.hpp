#pragma once

#include "../../../../JString.hpp"
#include "../../../../JObject.hpp"
#include "./MandatoryStreamCombination.def.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean MandatoryStreamCombination::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString MandatoryStreamCombination::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JObject MandatoryStreamCombination::getStreamsInformation() const
	{
		return callObjectMethod(
			"getStreamsInformation",
			"()Ljava/util/List;"
		);
	}
	inline jint MandatoryStreamCombination::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean MandatoryStreamCombination::isReprocessable() const
	{
		return callMethod<jboolean>(
			"isReprocessable",
			"()Z"
		);
	}
} // namespace android::hardware::camera2::params

// Base class headers

