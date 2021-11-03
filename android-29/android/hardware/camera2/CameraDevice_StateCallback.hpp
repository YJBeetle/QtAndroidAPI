#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::camera2
{
	class CameraDevice;
}

namespace android::hardware::camera2
{
	class CameraDevice_StateCallback : public JObject
	{
	public:
		// Fields
		static jint ERROR_CAMERA_DEVICE();
		static jint ERROR_CAMERA_DISABLED();
		static jint ERROR_CAMERA_IN_USE();
		static jint ERROR_CAMERA_SERVICE();
		static jint ERROR_MAX_CAMERAS_IN_USE();
		
		// QJniObject forward
		template<typename ...Ts> explicit CameraDevice_StateCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CameraDevice_StateCallback(QJniObject obj);
		
		// Constructors
		CameraDevice_StateCallback();
		
		// Methods
		void onClosed(android::hardware::camera2::CameraDevice arg0);
		void onDisconnected(android::hardware::camera2::CameraDevice arg0);
		void onError(android::hardware::camera2::CameraDevice arg0, jint arg1);
		void onOpened(android::hardware::camera2::CameraDevice arg0);
	};
} // namespace android::hardware::camera2

