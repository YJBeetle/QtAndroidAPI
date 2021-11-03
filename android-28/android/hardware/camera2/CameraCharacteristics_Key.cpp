#include "./CameraCharacteristics_Key.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// QJniObject forward
	CameraCharacteristics_Key::CameraCharacteristics_Key(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean CameraCharacteristics_Key::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring CameraCharacteristics_Key::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CameraCharacteristics_Key::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CameraCharacteristics_Key::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::hardware::camera2

