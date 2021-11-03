#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./InputConfiguration.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// QJniObject forward
	InputConfiguration::InputConfiguration(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	InputConfiguration::InputConfiguration(JObject arg0, jint arg1)
		: JObject(
			"android.hardware.camera2.params.InputConfiguration",
			"(Ljava/util/Collection;I)V",
			arg0.object(),
			arg1
		) {}
	InputConfiguration::InputConfiguration(jint arg0, jint arg1, jint arg2)
		: JObject(
			"android.hardware.camera2.params.InputConfiguration",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jboolean InputConfiguration::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint InputConfiguration::getFormat()
	{
		return callMethod<jint>(
			"getFormat",
			"()I"
		);
	}
	jint InputConfiguration::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint InputConfiguration::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jint InputConfiguration::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean InputConfiguration::isMultiResolution()
	{
		return callMethod<jboolean>(
			"isMultiResolution",
			"()Z"
		);
	}
	JString InputConfiguration::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware::camera2::params

