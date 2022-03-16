#include "../../../../JObject.hpp"
#include "./MandatoryStreamCombination_MandatoryStreamInformation.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// Constructors
	
	// Methods
	jboolean MandatoryStreamCombination_MandatoryStreamInformation::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject MandatoryStreamCombination_MandatoryStreamInformation::getAvailableSizes() const
	{
		return callObjectMethod(
			"getAvailableSizes",
			"()Ljava/util/List;"
		);
	}
	jint MandatoryStreamCombination_MandatoryStreamInformation::getFormat() const
	{
		return callMethod<jint>(
			"getFormat",
			"()I"
		);
	}
	jint MandatoryStreamCombination_MandatoryStreamInformation::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean MandatoryStreamCombination_MandatoryStreamInformation::isInput() const
	{
		return callMethod<jboolean>(
			"isInput",
			"()Z"
		);
	}
} // namespace android::hardware::camera2::params

