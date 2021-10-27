#include "./MandatoryStreamCombination.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	MandatoryStreamCombination::MandatoryStreamCombination(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean MandatoryStreamCombination::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring MandatoryStreamCombination::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject MandatoryStreamCombination::getStreamsInformation()
	{
		return __thiz.callObjectMethod(
			"getStreamsInformation",
			"()Ljava/util/List;"
		);
	}
	jint MandatoryStreamCombination::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean MandatoryStreamCombination::isReprocessable()
	{
		return __thiz.callMethod<jboolean>(
			"isReprocessable",
			"()Z"
		);
	}
} // namespace android::hardware::camera2::params

