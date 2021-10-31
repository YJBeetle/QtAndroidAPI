#include "./CaptureRequest_Key.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// QJniObject forward
	CaptureRequest_Key::CaptureRequest_Key(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
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

