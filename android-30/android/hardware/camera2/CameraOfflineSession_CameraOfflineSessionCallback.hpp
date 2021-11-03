#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::camera2
{
	class CameraOfflineSession;
}

namespace android::hardware::camera2
{
	class CameraOfflineSession_CameraOfflineSessionCallback : public JObject
	{
	public:
		// Fields
		static jint STATUS_INTERNAL_ERROR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CameraOfflineSession_CameraOfflineSessionCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CameraOfflineSession_CameraOfflineSessionCallback(QAndroidJniObject obj);
		
		// Constructors
		CameraOfflineSession_CameraOfflineSessionCallback();
		
		// Methods
		void onClosed(android::hardware::camera2::CameraOfflineSession arg0);
		void onError(android::hardware::camera2::CameraOfflineSession arg0, jint arg1);
		void onIdle(android::hardware::camera2::CameraOfflineSession arg0);
		void onReady(android::hardware::camera2::CameraOfflineSession arg0);
		void onSwitchFailed(android::hardware::camera2::CameraOfflineSession arg0);
	};
} // namespace android::hardware::camera2

