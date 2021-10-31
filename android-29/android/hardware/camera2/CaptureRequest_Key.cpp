#include "./CaptureRequest_Key.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// QAndroidJniObject forward
	CaptureRequest_Key::CaptureRequest_Key(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CaptureRequest_Key::CaptureRequest_Key(jstring arg0, jclass arg1)
		: __JniBaseClass(
			"android.hardware.camera2.CaptureRequest$Key",
			"(Ljava/lang/String;Ljava/lang/Class;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean CaptureRequest_Key::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring CaptureRequest_Key::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CaptureRequest_Key::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CaptureRequest_Key::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::hardware::camera2
