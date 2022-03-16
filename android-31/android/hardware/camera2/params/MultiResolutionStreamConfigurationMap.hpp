#pragma once

#include "../../../../JIntArray.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./MultiResolutionStreamConfigurationMap.def.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean MultiResolutionStreamConfigurationMap::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JIntArray MultiResolutionStreamConfigurationMap::getInputFormats() const
	{
		return callObjectMethod(
			"getInputFormats",
			"()[I"
		);
	}
	inline JObject MultiResolutionStreamConfigurationMap::getInputInfo(jint arg0) const
	{
		return callObjectMethod(
			"getInputInfo",
			"(I)Ljava/util/Collection;",
			arg0
		);
	}
	inline JIntArray MultiResolutionStreamConfigurationMap::getOutputFormats() const
	{
		return callObjectMethod(
			"getOutputFormats",
			"()[I"
		);
	}
	inline JObject MultiResolutionStreamConfigurationMap::getOutputInfo(jint arg0) const
	{
		return callObjectMethod(
			"getOutputInfo",
			"(I)Ljava/util/Collection;",
			arg0
		);
	}
	inline jint MultiResolutionStreamConfigurationMap::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString MultiResolutionStreamConfigurationMap::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware::camera2::params

// Base class headers

