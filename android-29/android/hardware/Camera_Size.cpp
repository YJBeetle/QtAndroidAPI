#include "./Camera.hpp"
#include "./Camera_Size.hpp"

namespace android::hardware
{
	// Fields
	jint Camera_Size::height()
	{
		return getField<jint>(
			"height"
		);
	}
	jint Camera_Size::width()
	{
		return getField<jint>(
			"width"
		);
	}
	
	// QAndroidJniObject forward
	Camera_Size::Camera_Size(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Camera_Size::Camera_Size(android::hardware::Camera arg0, jint arg1, jint arg2)
		: JObject(
			"android.hardware.Camera$Size",
			"(Landroid/hardware/Camera;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	jboolean Camera_Size::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Camera_Size::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::hardware

