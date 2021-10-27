#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_CAPTUREREQUEST_KEY
#define ANDROID_HARDWARE_CAMERA2_CAPTUREREQUEST_KEY

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::hardware::camera2
{
	class CaptureRequest_Key : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jclass arg1);
		void __constructor(const QString &arg0, jclass arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getName();
		jint hashCode();
		jstring toString();
	};
} // namespace __jni_impl::android::hardware::camera2


namespace __jni_impl::android::hardware::camera2
{
	// Fields
	
	// Constructors
	void CaptureRequest_Key::__constructor(jstring arg0, jclass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CaptureRequest$Key",
			"(Ljava/lang/String;Ljava/lang/Class;)V",
			arg0,
			arg1
		);
	}
	void CaptureRequest_Key::__constructor(const QString &arg0, jclass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CaptureRequest$Key",
			"(Ljava/lang/String;Ljava/lang/Class;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
	jboolean CaptureRequest_Key::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring CaptureRequest_Key::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CaptureRequest_Key::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CaptureRequest_Key::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::hardware::camera2

namespace android::hardware::camera2
{
	class CaptureRequest_Key : public __jni_impl::android::hardware::camera2::CaptureRequest_Key
	{
	public:
		CaptureRequest_Key(QAndroidJniObject obj) { __thiz = obj; }
		CaptureRequest_Key(jstring arg0, jclass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::hardware::camera2

#endif // ANDROID_HARDWARE_CAMERA2_CAPTUREREQUEST_KEY

