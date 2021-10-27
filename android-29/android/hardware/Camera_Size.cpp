#include "./Camera.hpp"
#include "./Camera_Size.hpp"

namespace android::hardware
{
	// Fields
	jint Camera_Size::height()
	{
		return __thiz.getField<jint>(
			"height"
		);
	}
	jint Camera_Size::width()
	{
		return __thiz.getField<jint>(
			"width"
		);
	}
	
	Camera_Size::Camera_Size(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Camera_Size::Camera_Size(android::hardware::Camera &arg0, jint &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.Camera$Size",
			"(Landroid/hardware/Camera;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	
	// Methods
	jboolean Camera_Size::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Camera_Size::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::hardware

