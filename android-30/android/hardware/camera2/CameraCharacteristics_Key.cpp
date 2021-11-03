#include "./CameraCharacteristics_Key.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// QJniObject forward
	CameraCharacteristics_Key::CameraCharacteristics_Key(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CameraCharacteristics_Key::CameraCharacteristics_Key(jstring arg0, jclass arg1)
		: JObject(
			"android.hardware.camera2.CameraCharacteristics$Key",
			"(Ljava/lang/String;Ljava/lang/Class;)V",
			arg0,
			arg1
		) {}
	
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

