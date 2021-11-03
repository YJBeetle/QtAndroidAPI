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
		
		// QJniObject forward
		template<typename ...Ts> explicit CameraManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CameraManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::hardware::camera2::CameraCharacteristics getCameraCharacteristics(JString arg0);
		JArray getCameraIdList();
		void openCamera(JString arg0, android::hardware::camera2::CameraDevice_StateCallback arg1, android::os::Handler arg2);
		void openCamera(JString arg0, JObject arg1, android::hardware::camera2::CameraDevice_StateCallback arg2);
		void registerAvailabilityCallback(android::hardware::camera2::CameraManager_AvailabilityCallback arg0, android::os::Handler arg1);
		void registerAvailabilityCallback(JObject arg0, android::hardware::camera2::CameraManager_AvailabilityCallback arg1);
		void registerTorchCallback(android::hardware::camera2::CameraManager_TorchCallback arg0, android::os::Handler arg1);
		void registerTorchCallback(JObject arg0, android::hardware::camera2::CameraManager_TorchCallback arg1);
		void setTorchMode(JString arg0, jboolean arg1);
		void unregisterAvailabilityCallback(android::hardware::camera2::CameraManager_AvailabilityCallback arg0);
		void unregisterTorchCallback(android::hardware::camera2::CameraManager_TorchCallback arg0);
	};
} // namespace android::hardware::camera2

