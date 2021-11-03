#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./CameraCharacteristics_Key.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// QJniObject forward
	CameraCharacteristics_Key::CameraCharacteristics_Key(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CameraCharacteristics_Key::CameraCharacteristics_Key(JString arg0, JClass arg1)
		: JObject(
			"android.hardware.camera2.CameraCharacteristics$Key",
			"(Ljava/lang/String;Ljava/lang/Class;)V",
			arg0.object<jstring>(),
			arg1.object<jclass>()
		) {}
	
	// Methods
	jboolean CameraCharacteristics_Key::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString CameraCharacteristics_Key::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint CameraCharacteristics_Key::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CameraCharacteristics_Key::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware::camera2

