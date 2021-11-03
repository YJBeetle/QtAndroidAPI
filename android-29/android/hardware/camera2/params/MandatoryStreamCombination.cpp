#include "../../../../JString.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./MandatoryStreamCombination.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// QAndroidJniObject forward
	MandatoryStreamCombination::MandatoryStreamCombination(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean MandatoryStreamCombination::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString MandatoryStreamCombination::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	JObject MandatoryStreamCombination::getStreamsInformation()
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

