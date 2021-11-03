#include "../../../../JString.hpp"
#include "../../../../JObject.hpp"
#include "./MandatoryStreamCombination.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// QJniObject forward
	MandatoryStreamCombination::MandatoryStreamCombination(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean MandatoryStreamCombination::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString MandatoryStreamCombination::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	JObject MandatoryStreamCombination::getStreamsInformation() const
	{
		return callObjectMethod(
			"getStreamsInformation",
			"()Ljava/util/List;"
		);
	}
	jint MandatoryStreamCombination::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean MandatoryStreamCombination::isReprocessable() const
	{
		return callMethod<jboolean>(
			"isReprocessable",
			"()Z"
		);
	}
} // namespace android::hardware::camera2::params

