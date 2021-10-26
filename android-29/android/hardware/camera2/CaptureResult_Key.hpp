#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_CAPTURERESULT_KEY
#define ANDROID_HARDWARE_CAMERA2_CAPTURERESULT_KEY

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::hardware::camera2
{
	class CaptureResult_Key : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jclass arg1);
		void __constructor(const QString &arg0, jclass arg1);
		
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
	void CaptureResult_Key::__constructor(jstring arg0, jclass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CaptureResult$Key",
			"(Ljava/lang/String;Ljava/lang/Class;)V",
			arg0,
			arg1
		);
	}
	void CaptureResult_Key::__constructor(const QString &arg0, jclass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CaptureResult$Key",
			"(Ljava/lang/String;Ljava/lang/Class;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
	jstring CaptureResult_Key::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean CaptureResult_Key::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring CaptureResult_Key::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
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
} // namespace __jni_impl::android::hardware::camera2

namespace android::hardware::camera2
{
	class CaptureResult_Key : public __jni_impl::android::hardware::camera2::CaptureResult_Key
	{
	public:
		CaptureResult_Key(QAndroidJniObject obj) { __thiz = obj; }
		CaptureResult_Key(jstring arg0, jclass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::hardware::camera2

#endif // ANDROID_HARDWARE_CAMERA2_CAPTURERESULT_KEY

