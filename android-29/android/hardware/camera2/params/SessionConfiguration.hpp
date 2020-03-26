#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_PARAMS_SESSIONCONFIGURATION
#define ANDROID_HARDWARE_CAMERA2_PARAMS_SESSIONCONFIGURATION

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware::camera2
{
	class CameraCaptureSession_StateCallback;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::hardware::camera2::params
{
	class InputConfiguration;
}
namespace __jni_impl::android::hardware::camera2
{
	class CaptureRequest;
}

namespace __jni_impl::android::hardware::camera2::params
{
	class SessionConfiguration : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint SESSION_HIGH_SPEED();
		static jint SESSION_REGULAR();
		
		// Constructors
		void __constructor(jint arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::hardware::camera2::CameraCaptureSession_StateCallback arg3);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		QAndroidJniObject getExecutor();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getSessionType();
		QAndroidJniObject getOutputConfigurations();
		QAndroidJniObject getStateCallback();
		void setInputConfiguration(__jni_impl::android::hardware::camera2::params::InputConfiguration arg0);
		QAndroidJniObject getInputConfiguration();
		void setSessionParameters(__jni_impl::android::hardware::camera2::CaptureRequest arg0);
		QAndroidJniObject getSessionParameters();
	};
} // namespace __jni_impl::android::hardware::camera2::params

#include "../CameraCaptureSession_StateCallback.hpp"
#include "../../../os/Parcel.hpp"
#include "InputConfiguration.hpp"
#include "../CaptureRequest.hpp"

namespace __jni_impl::android::hardware::camera2::params
{
	// Fields
	QAndroidJniObject SessionConfiguration::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.params.SessionConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint SessionConfiguration::SESSION_HIGH_SPEED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.SessionConfiguration",
			"SESSION_HIGH_SPEED"
		);
	}
	jint SessionConfiguration::SESSION_REGULAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.SessionConfiguration",
			"SESSION_REGULAR"
		);
	}
	
	// Constructors
	void SessionConfiguration::__constructor(jint arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::hardware::camera2::CameraCaptureSession_StateCallback arg3)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.SessionConfiguration",
			"(ILjava/util/List;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	
	// Methods
	jboolean SessionConfiguration::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint SessionConfiguration::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject SessionConfiguration::getExecutor()
	{
		return __thiz.callObjectMethod(
			"getExecutor",
			"()Ljava/util/concurrent/Executor;"
		);
	}
	jint SessionConfiguration::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void SessionConfiguration::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint SessionConfiguration::getSessionType()
	{
		return __thiz.callMethod<jint>(
			"getSessionType",
			"()I"
		);
	}
	QAndroidJniObject SessionConfiguration::getOutputConfigurations()
	{
		return __thiz.callObjectMethod(
			"getOutputConfigurations",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject SessionConfiguration::getStateCallback()
	{
		return __thiz.callObjectMethod(
			"getStateCallback",
			"()Landroid/hardware/camera2/CameraCaptureSession$StateCallback;"
		);
	}
	void SessionConfiguration::setInputConfiguration(__jni_impl::android::hardware::camera2::params::InputConfiguration arg0)
	{
		__thiz.callMethod<void>(
			"setInputConfiguration",
			"(Landroid/hardware/camera2/params/InputConfiguration;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SessionConfiguration::getInputConfiguration()
	{
		return __thiz.callObjectMethod(
			"getInputConfiguration",
			"()Landroid/hardware/camera2/params/InputConfiguration;"
		);
	}
	void SessionConfiguration::setSessionParameters(__jni_impl::android::hardware::camera2::CaptureRequest arg0)
	{
		__thiz.callMethod<void>(
			"setSessionParameters",
			"(Landroid/hardware/camera2/CaptureRequest;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SessionConfiguration::getSessionParameters()
	{
		return __thiz.callObjectMethod(
			"getSessionParameters",
			"()Landroid/hardware/camera2/CaptureRequest;"
		);
	}
} // namespace __jni_impl::android::hardware::camera2::params

namespace android::hardware::camera2::params
{
	class SessionConfiguration : public __jni_impl::android::hardware::camera2::params::SessionConfiguration
	{
	public:
		SessionConfiguration(QAndroidJniObject obj) { __thiz = obj; }
		SessionConfiguration(jint arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::hardware::camera2::CameraCaptureSession_StateCallback arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::hardware::camera2::params

#endif // ANDROID_HARDWARE_CAMERA2_PARAMS_SESSIONCONFIGURATION

