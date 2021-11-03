#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./CaptureResult_Key.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// QAndroidJniObject forward
	CaptureResult_Key::CaptureResult_Key(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean CaptureResult_Key::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString CaptureResult_Key::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint CaptureResult_Key::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CaptureResult_Key::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware::camera2

