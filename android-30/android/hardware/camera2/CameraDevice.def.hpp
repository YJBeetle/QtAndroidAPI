#pragma once

#include "../../../JObject.hpp"

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
class JString;

namespace android::hardware::camera2
{
	class CameraDevice : public JObject
	{
	public:
		// Fields
		static jint AUDIO_RESTRICTION_NONE();
		static jint AUDIO_RESTRICTION_VIBRATION();
		static jint AUDIO_RESTRICTION_VIBRATION_SOUND();
		static jint TEMPLATE_MANUAL();
		static jint TEMPLATE_PREVIEW();
		static jint TEMPLATE_RECORD();
		static jint TEMPLATE_STILL_CAPTURE();
		static jint TEMPLATE_VIDEO_SNAPSHOT();
		static jint TEMPLATE_ZERO_SHUTTER_LAG();
		
		// QJniObject forward
		template<typename ...Ts> explicit CameraDevice(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CameraDevice(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void close() const;
		android::hardware::camera2::CaptureRequest_Builder createCaptureRequest(jint arg0) const;
		android::hardware::camera2::CaptureRequest_Builder createCaptureRequest(jint arg0, JObject arg1) const;
		void createCaptureSession(android::hardware::camera2::params::SessionConfiguration arg0) const;
		void createCaptureSession(JObject arg0, android::hardware::camera2::CameraCaptureSession_StateCallback arg1, android::os::Handler arg2) const;
		void createCaptureSessionByOutputConfigurations(JObject arg0, android::hardware::camera2::CameraCaptureSession_StateCallback arg1, android::os::Handler arg2) const;
		void createConstrainedHighSpeedCaptureSession(JObject arg0, android::hardware::camera2::CameraCaptureSession_StateCallback arg1, android::os::Handler arg2) const;
		android::hardware::camera2::CaptureRequest_Builder createReprocessCaptureRequest(android::hardware::camera2::TotalCaptureResult arg0) const;
		void createReprocessableCaptureSession(android::hardware::camera2::params::InputConfiguration arg0, JObject arg1, android::hardware::camera2::CameraCaptureSession_StateCallback arg2, android::os::Handler arg3) const;
		void createReprocessableCaptureSessionByConfigurations(android::hardware::camera2::params::InputConfiguration arg0, JObject arg1, android::hardware::camera2::CameraCaptureSession_StateCallback arg2, android::os::Handler arg3) const;
		jint getCameraAudioRestriction() const;
		JString getId() const;
		jboolean isSessionConfigurationSupported(android::hardware::camera2::params::SessionConfiguration arg0) const;
		void setCameraAudioRestriction(jint arg0) const;
	};
} // namespace android::hardware::camera2

