#include "./CameraCharacteristics_Key.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	CameraCharacteristics_Key::CameraCharacteristics_Key(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CameraCharacteristics_Key::CameraCharacteristics_Key(jstring &arg0, jclass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraCharacteristics$Key",
			"(Ljava/lang/String;Ljava/lang/Class;)V",
			arg0,
			arg1
		);
	}
	CameraCharacteristics_Key::CameraCharacteristics_Key(const QString &arg0, jclass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraCharacteristics$Key",
			"(Ljava/lang/String;Ljava/lang/Class;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
	jboolean CameraCharacteristics_Key::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring CameraCharacteristics_Key::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CameraCharacteristics_Key::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CameraCharacteristics_Key::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::hardware::camera2

