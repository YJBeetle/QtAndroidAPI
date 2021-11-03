#include "./MultiResolutionStreamConfigurationMap.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// QAndroidJniObject forward
	MultiResolutionStreamConfigurationMap::MultiResolutionStreamConfigurationMap(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean MultiResolutionStreamConfigurationMap::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jintArray MultiResolutionStreamConfigurationMap::getInputFormats()
	{
		return callObjectMethod(
			"getInputFormats",
			"()[I"
		).object<jintArray>();
	}
	JObject MultiResolutionStreamConfigurationMap::getInputInfo(jint arg0)
	{
		return callObjectMethod(
			"getInputInfo",
			"(I)Ljava/util/Collection;",
			arg0
		);
	}
	jintArray MultiResolutionStreamConfigurationMap::getOutputFormats()
	{
		return callObjectMethod(
			"getOutputFormats",
			"()[I"
		).object<jintArray>();
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
	jstring MultiResolutionStreamConfigurationMap::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::hardware::camera2::params

