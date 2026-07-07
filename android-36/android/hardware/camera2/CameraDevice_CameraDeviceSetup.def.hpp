#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::camera2
{
	class CameraCharacteristics;
}
namespace android::hardware::camera2
{
	class CameraDevice_StateCallback;
}
namespace android::hardware::camera2
{
	class CaptureRequest_Builder;
}
namespace android::hardware::camera2::params
{
	class SessionConfiguration;
}
class JString;

namespace android::hardware::camera2
{
	class CameraDevice_CameraDeviceSetup : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CameraDevice_CameraDeviceSetup(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CameraDevice_CameraDeviceSetup(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::hardware::camera2::CaptureRequest_Builder createCaptureRequest(jint arg0) const;
		JString getId() const;
		android::hardware::camera2::CameraCharacteristics getSessionCharacteristics(android::hardware::camera2::params::SessionConfiguration arg0) const;
		jboolean isSessionConfigurationSupported(android::hardware::camera2::params::SessionConfiguration arg0) const;
		void openCamera(JObject arg0, android::hardware::camera2::CameraDevice_StateCallback arg1) const;
	};
} // namespace android::hardware::camera2

