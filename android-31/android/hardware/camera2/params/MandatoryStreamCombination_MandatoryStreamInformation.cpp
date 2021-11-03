#include "../../../../JObject.hpp"
#include "./MandatoryStreamCombination_MandatoryStreamInformation.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// QJniObject forward
	MandatoryStreamCombination_MandatoryStreamInformation::MandatoryStreamCombination_MandatoryStreamInformation(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean MandatoryStreamCombination_MandatoryStreamInformation::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject MandatoryStreamCombination_MandatoryStreamInformation::getAvailableSizes()
	{
		return callObjectMethod(
			"getAvailableSizes",
			"()Ljava/util/List;"
		);
	}
	jint MandatoryStreamCombination_MandatoryStreamInformation::getFormat()
	{
		return callMethod<jint>(
			"getFormat",
			"()I"
		);
	}
	jint MandatoryStreamCombination_MandatoryStreamInformation::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean MandatoryStreamCombination_MandatoryStreamInformation::isInput()
	{
		return callMethod<jboolean>(
			"isInput",
			"()Z"
		);
	}
	jboolean MandatoryStreamCombination_MandatoryStreamInformation::isMaximumSize()
	{
		return callMethod<jboolean>(
			"isMaximumSize",
			"()Z"
		);
	}
	jboolean MandatoryStreamCombination_MandatoryStreamInformation::isUltraHighResolution()
	{
		return callMethod<jboolean>(
			"isUltraHighResolution",
			"()Z"
		);
	}
} // namespace android::hardware::camera2::params

