#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_CAMERACHARACTERISTICS_KEY
#define ANDROID_HARDWARE_CAMERA2_CAMERACHARACTERISTICS_KEY

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::hardware::camera2
{
	class CameraCharacteristics_Key : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jclass arg1);
		
		// Methods
		jstring getName();
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
	};
} // namespace __jni_impl::android::hardware::camera2


namespace __jni_impl::android::hardware::camera2
{
	// Fields
	
	// Constructors
	void CameraCharacteristics_Key::__constructor(jstring arg0, jclass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraCharacteristics$Key",
			"(Ljava/lang/String;Ljava/lang/Class;)V",
			arg0,
			arg1);
	}
	
	// Methods
	jstring CameraCharacteristics_Key::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean CameraCharacteristics_Key::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring CameraCharacteristics_Key::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
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
} // namespace __jni_impl::android::hardware::camera2

namespace android::hardware::camera2
{
	class CameraCharacteristics_Key : public __jni_impl::android::hardware::camera2::CameraCharacteristics_Key
	{
	public:
		CameraCharacteristics_Key(QAndroidJniObject obj) { __thiz = obj; }
		CameraCharacteristics_Key(jstring arg0, jclass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::hardware::camera2

#endif // ANDROID_HARDWARE_CAMERA2_CAMERACHARACTERISTICS_KEY

