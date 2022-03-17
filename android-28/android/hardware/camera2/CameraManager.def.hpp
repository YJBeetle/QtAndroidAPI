#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::content
{
	class Context;
}
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
	class CameraManager_AvailabilityCallback;
}
namespace android::hardware::camera2
{
	class CameraManager_TorchCallback;
}
namespace android::os
{
	class Handler;
}
class JString;

namespace android::hardware::camera2
{
	class CameraManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CameraManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CameraManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::hardware::camera2::CameraCharacteristics getCameraCharacteristics(JString arg0) const;
		JArray getCameraIdList() const;
		void openCamera(JString arg0, android::hardware::camera2::CameraDevice_StateCallback arg1, android::os::Handler arg2) const;
		void openCamera(JString arg0, JObject arg1, android::hardware::camera2::CameraDevice_StateCallback arg2) const;
		void registerAvailabilityCallback(android::hardware::camera2::CameraManager_AvailabilityCallback arg0, android::os::Handler arg1) const;
		void registerAvailabilityCallback(JObject arg0, android::hardware::camera2::CameraManager_AvailabilityCallback arg1) const;
		void registerTorchCallback(android::hardware::camera2::CameraManager_TorchCallback arg0, android::os::Handler arg1) const;
		void registerTorchCallback(JObject arg0, android::hardware::camera2::CameraManager_TorchCallback arg1) const;
		void setTorchMode(JString arg0, jboolean arg1) const;
		void unregisterAvailabilityCallback(android::hardware::camera2::CameraManager_AvailabilityCallback arg0) const;
		void unregisterTorchCallback(android::hardware::camera2::CameraManager_TorchCallback arg0) const;
	};
} // namespace android::hardware::camera2

