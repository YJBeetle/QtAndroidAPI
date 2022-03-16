#include "../../../../JIntArray.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./MultiResolutionStreamConfigurationMap.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// Constructors
	
	// Methods
	jboolean MultiResolutionStreamConfigurationMap::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JIntArray MultiResolutionStreamConfigurationMap::getInputFormats() const
	{
		return callObjectMethod(
			"getInputFormats",
			"()[I"
		);
	}
	JObject MultiResolutionStreamConfigurationMap::getInputInfo(jint arg0) const
	{
		return callObjectMethod(
			"getInputInfo",
			"(I)Ljava/util/Collection;",
			arg0
		);
	}
	JIntArray MultiResolutionStreamConfigurationMap::getOutputFormats() const
	{
		return callObjectMethod(
			"getOutputFormats",
			"()[I"
		);
	}
	JObject MultiResolutionStreamConfigurationMap::getOutputInfo(jint arg0) const
	{
		return callObjectMethod(
			"getOutputInfo",
			"(I)Ljava/util/Collection;",
			arg0
		);
	}
	jint MultiResolutionStreamConfigurationMap::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString MultiResolutionStreamConfigurationMap::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware::camera2::params

