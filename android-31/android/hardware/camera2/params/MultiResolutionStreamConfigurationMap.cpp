#include "../../../../JIntArray.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./MultiResolutionStreamConfigurationMap.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// QJniObject forward
	MultiResolutionStreamConfigurationMap::MultiResolutionStreamConfigurationMap(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean MultiResolutionStreamConfigurationMap::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JIntArray MultiResolutionStreamConfigurationMap::getInputFormats()
	{
		return callObjectMethod(
			"getInputFormats",
			"()[I"
		);
	}
	JObject MultiResolutionStreamConfigurationMap::getInputInfo(jint arg0)
	{
		return callObjectMethod(
			"getInputInfo",
			"(I)Ljava/util/Collection;",
			arg0
		);
	}
	JIntArray MultiResolutionStreamConfigurationMap::getOutputFormats()
	{
		return callObjectMethod(
			"getOutputFormats",
			"()[I"
		);
	}
	JObject MultiResolutionStreamConfigurationMap::getOutputInfo(jint arg0)
	{
		return callObjectMethod(
			"getOutputInfo",
			"(I)Ljava/util/Collection;",
			arg0
		);
	}
	jint MultiResolutionStreamConfigurationMap::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString MultiResolutionStreamConfigurationMap::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware::camera2::params

