#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::hardware::camera2
{
	class CameraCaptureSession_StateCallback;
}
namespace android::hardware::camera2
{
	class CaptureRequest_Builder;
}
namespace android::hardware::camera2
{
	class TotalCaptureResult;
}
namespace android::hardware::camera2::params
{
	class InputConfiguration;
}
namespace android::hardware::camera2::params
{
	class SessionConfiguration;
}
namespace android::os
{
	class Handler;
}

namespace android::hardware::camera2
{
	class CameraDevice : public __JniBaseClass
	{
	public:
		// Fields
		static jint TEMPLATE_MANUAL();
		static jint TEMPLATE_PREVIEW();
		static jint TEMPLATE_RECORD();
		static jint TEMPLATE_STILL_CAPTURE();
		static jint TEMPLATE_VIDEO_SNAPSHOT();
		static jint TEMPLATE_ZERO_SHUTTER_LAG();
		
		CameraDevice(QAndroidJniObject obj);
		// Constructors
		CameraDevice() = default;
		
		// Methods
		void close();
		QAndroidJniObject createCaptureRequest(jint arg0);
		QAndroidJniObject createCaptureRequest(jint arg0, __JniBaseClass arg1);
		void createCaptureSession(android::hardware::camera2::params::SessionConfiguration arg0);
		void createCaptureSession(__JniBaseClass arg0, android::hardware::camera2::CameraCaptureSession_StateCallback arg1, android::os::Handler arg2);
		void createCaptureSessionByOutputConfigurations(__JniBaseClass arg0, android::hardware::camera2::CameraCaptureSession_StateCallback arg1, android::os::Handler arg2);
		void createConstrainedHighSpeedCaptureSession(__JniBaseClass arg0, android::hardware::camera2::CameraCaptureSession_StateCallback arg1, android::os::Handler arg2);
		QAndroidJniObject createReprocessCaptureRequest(android::hardware::camera2::TotalCaptureResult arg0);
		void createReprocessableCaptureSession(android::hardware::camera2::params::InputConfiguration arg0, __JniBaseClass arg1, android::hardware::camera2::CameraCaptureSession_StateCallback arg2, android::os::Handler arg3);
		void createReprocessableCaptureSessionByConfigurations(android::hardware::camera2::params::InputConfiguration arg0, __JniBaseClass arg1, android::hardware::camera2::CameraCaptureSession_StateCallback arg2, android::os::Handler arg3);
		jstring getId();
		jboolean isSessionConfigurationSupported(android::hardware::camera2::params::SessionConfiguration arg0);
	};
} // namespace android::hardware::camera2

