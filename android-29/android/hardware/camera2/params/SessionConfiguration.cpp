#include "../CameraCaptureSession_StateCallback.hpp"
#include "../CaptureRequest.hpp"
#include "./InputConfiguration.hpp"
#include "../../../os/Parcel.hpp"
#include "./SessionConfiguration.hpp"

namespace android::hardware::camera2::params
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
	
	SessionConfiguration::SessionConfiguration(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SessionConfiguration::SessionConfiguration(jint &arg0, __JniBaseClass &arg1, __JniBaseClass &arg2, android::hardware::camera2::CameraCaptureSession_StateCallback &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.SessionConfiguration",
			"(ILjava/util/List;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	jint SessionConfiguration::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SessionConfiguration::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject SessionConfiguration::getExecutor()
	{
		return __thiz.callObjectMethod(
			"getExecutor",
			"()Ljava/util/concurrent/Executor;"
		);
	}
	QAndroidJniObject SessionConfiguration::getInputConfiguration()
	{
		return __thiz.callObjectMethod(
			"getInputConfiguration",
			"()Landroid/hardware/camera2/params/InputConfiguration;"
		);
	}
	QAndroidJniObject SessionConfiguration::getOutputConfigurations()
	{
		return __thiz.callObjectMethod(
			"getOutputConfigurations",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject SessionConfiguration::getSessionParameters()
	{
		return __thiz.callObjectMethod(
			"getSessionParameters",
			"()Landroid/hardware/camera2/CaptureRequest;"
		);
	}
	jint SessionConfiguration::getSessionType()
	{
		return __thiz.callMethod<jint>(
			"getSessionType",
			"()I"
		);
	}
	QAndroidJniObject SessionConfiguration::getStateCallback()
	{
		return __thiz.callObjectMethod(
			"getStateCallback",
			"()Landroid/hardware/camera2/CameraCaptureSession$StateCallback;"
		);
	}
	jint SessionConfiguration::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void SessionConfiguration::setInputConfiguration(android::hardware::camera2::params::InputConfiguration arg0)
	{
		__thiz.callMethod<void>(
			"setInputConfiguration",
			"(Landroid/hardware/camera2/params/InputConfiguration;)V",
			arg0.__jniObject().object()
		);
	}
	void SessionConfiguration::setSessionParameters(android::hardware::camera2::CaptureRequest arg0)
	{
		__thiz.callMethod<void>(
			"setSessionParameters",
			"(Landroid/hardware/camera2/CaptureRequest;)V",
			arg0.__jniObject().object()
		);
	}
	void SessionConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::hardware::camera2::params

