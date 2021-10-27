#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../util/AndroidException.hpp"


namespace __jni_impl::android::hardware::camera2
{
	class CameraAccessException : public __jni_impl::android::util::AndroidException
	{
	public:
		// Fields
		static jint CAMERA_DISABLED();
		static jint CAMERA_DISCONNECTED();
		static jint CAMERA_ERROR();
		static jint CAMERA_IN_USE();
		static jint MAX_CAMERAS_IN_USE();
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor(jint arg0, jstring arg1);
		void __constructor(jint arg0, const QString &arg1);
		void __constructor(jint arg0, jthrowable arg1);
		void __constructor(jint arg0, jstring arg1, jthrowable arg2);
		void __constructor(jint arg0, const QString &arg1, jthrowable arg2);
		
		// Methods
		jint getReason();
	};
} // namespace __jni_impl::android::hardware::camera2


namespace __jni_impl::android::hardware::camera2
{
	// Fields
	jint CameraAccessException::CAMERA_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraAccessException",
			"CAMERA_DISABLED"
		);
	}
	jint CameraAccessException::CAMERA_DISCONNECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraAccessException",
			"CAMERA_DISCONNECTED"
		);
	}
	jint CameraAccessException::CAMERA_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraAccessException",
			"CAMERA_ERROR"
		);
	}
	jint CameraAccessException::CAMERA_IN_USE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraAccessException",
			"CAMERA_IN_USE"
		);
	}
	jint CameraAccessException::MAX_CAMERAS_IN_USE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraAccessException",
			"MAX_CAMERAS_IN_USE"
		);
	}
	
	// Constructors
	void CameraAccessException::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraAccessException",
			"(I)V",
			arg0
		);
	}
	void CameraAccessException::__constructor(jint arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraAccessException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void CameraAccessException::__constructor(jint arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraAccessException",
			"(ILjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void CameraAccessException::__constructor(jint arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraAccessException",
			"(ILjava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void CameraAccessException::__constructor(jint arg0, jstring arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraAccessException",
			"(ILjava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void CameraAccessException::__constructor(jint arg0, const QString &arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraAccessException",
			"(ILjava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	
	// Methods
	jint CameraAccessException::getReason()
	{
		return __thiz.callMethod<jint>(
			"getReason",
			"()I"
		);
	}
} // namespace __jni_impl::android::hardware::camera2

namespace android::hardware::camera2
{
	class CameraAccessException : public __jni_impl::android::hardware::camera2::CameraAccessException
	{
	public:
		CameraAccessException(QAndroidJniObject obj) { __thiz = obj; }
		CameraAccessException(jint arg0)
		{
			__constructor(
				arg0);
		}
		CameraAccessException(jint arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		CameraAccessException(jint arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		CameraAccessException(jint arg0, jstring arg1, jthrowable arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::hardware::camera2

