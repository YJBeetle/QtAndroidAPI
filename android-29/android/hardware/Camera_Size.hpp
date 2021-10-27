#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware
{
	class Camera;
}

namespace __jni_impl::android::hardware
{
	class Camera_Size : public __JniBaseClass
	{
	public:
		// Fields
		jint height();
		jint width();
		
		// Constructors
		void __constructor(__jni_impl::android::hardware::Camera arg0, jint arg1, jint arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace __jni_impl::android::hardware

#include "./Camera.hpp"

namespace __jni_impl::android::hardware
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
	
	// Constructors
	void Camera_Size::__constructor(__jni_impl::android::hardware::Camera arg0, jint arg1, jint arg2)
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
} // namespace __jni_impl::android::hardware

namespace android::hardware
{
	class Camera_Size : public __jni_impl::android::hardware::Camera_Size
	{
	public:
		Camera_Size(QAndroidJniObject obj) { __thiz = obj; }
		Camera_Size(__jni_impl::android::hardware::Camera arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::hardware

