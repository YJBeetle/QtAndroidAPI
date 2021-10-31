#include "./MandatoryStreamCombination_MandatoryStreamInformation.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// QAndroidJniObject forward
	MandatoryStreamCombination_MandatoryStreamInformation::MandatoryStreamCombination_MandatoryStreamInformation(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean MandatoryStreamCombination_MandatoryStreamInformation::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject MandatoryStreamCombination_MandatoryStreamInformation::getAvailableSizes()
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
} // namespace android::hardware::camera2::params

