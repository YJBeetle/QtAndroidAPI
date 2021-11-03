#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::camera2
{
	class CameraCaptureSession_CaptureCallback;
}
namespace android::hardware::camera2
{
	class CameraDevice;
}
namespace android::hardware::camera2
{
	class CaptureRequest;
}
namespace android::hardware::camera2::params
{
	class OutputConfiguration;
}
namespace android::os
{
	class Handler;
}
namespace android::view
{
	class Surface;
}

namespace android::hardware::camera2
{
	class CameraCaptureSession : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CameraCaptureSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CameraCaptureSession(QJniObject obj);
		
		// Constructors
		CameraCaptureSession();
		
		// Methods
		void abortCaptures();
		jint capture(android::hardware::camera2::CaptureRequest arg0, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, android::os::Handler arg2);
		jint captureBurst(JObject arg0, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, android::os::Handler arg2);
		jint captureBurstRequests(JObject arg0, JObject arg1, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2);
		jint captureSingleRequest(android::hardware::camera2::CaptureRequest arg0, JObject arg1, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2);
		void close();
		void finalizeOutputConfigurations(JObject arg0);
		android::hardware::camera2::CameraDevice getDevice();
		android::view::Surface getInputSurface();
		jboolean isReprocessable();
		void prepare(android::view::Surface arg0);
		jint setRepeatingBurst(JObject arg0, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, android::os::Handler arg2);
		jint setRepeatingBurstRequests(JObject arg0, JObject arg1, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2);
		jint setRepeatingRequest(android::hardware::camera2::CaptureRequest arg0, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, android::os::Handler arg2);
		jint setSingleRepeatingRequest(android::hardware::camera2::CaptureRequest arg0, JObject arg1, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2);
		void stopRepeating();
		void updateOutputConfiguration(android::hardware::camera2::params::OutputConfiguration arg0);
	};
} // namespace android::hardware::camera2

