#include "./CaptureResult_Key.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// QJniObject forward
	CaptureResult_Key::CaptureResult_Key(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CaptureResult_Key::CaptureResult_Key(jstring arg0, jclass arg1)
		: JObject(
			"android.hardware.camera2.CaptureResult$Key",
			"(Ljava/lang/String;Ljava/lang/Class;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean CaptureResult_Key::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring CaptureResult_Key::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CaptureResult_Key::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CaptureResult_Key::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::hardware::camera2

