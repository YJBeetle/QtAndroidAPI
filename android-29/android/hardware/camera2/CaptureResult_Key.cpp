#include "./CaptureResult_Key.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	CaptureResult_Key::CaptureResult_Key(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CaptureResult_Key::CaptureResult_Key(jstring arg0, jclass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CaptureResult$Key",
			"(Ljava/lang/String;Ljava/lang/Class;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jboolean CaptureResult_Key::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring CaptureResult_Key::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CaptureResult_Key::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CaptureResult_Key::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::hardware::camera2

