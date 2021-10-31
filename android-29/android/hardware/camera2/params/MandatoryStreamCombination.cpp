#include "./MandatoryStreamCombination.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// QJniObject forward
	MandatoryStreamCombination::MandatoryStreamCombination(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean MandatoryStreamCombination::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring MandatoryStreamCombination::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	__JniBaseClass MandatoryStreamCombination::getStreamsInformation()
	{
		return callObjectMethod(
			"getStreamsInformation",
			"()Ljava/util/List;"
		);
	}
	jint MandatoryStreamCombination::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean MandatoryStreamCombination::isReprocessable()
	{
		return callMethod<jboolean>(
			"isReprocessable",
			"()Z"
		);
	}
} // namespace android::hardware::camera2::params

