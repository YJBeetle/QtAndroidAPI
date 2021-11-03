#pragma once

#include "../../../JObject.hpp"


namespace android::hardware::camera2
{
	class CameraManager_AvailabilityCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CameraManager_AvailabilityCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CameraManager_AvailabilityCallback(QJniObject obj);
		
		// Constructors
		CameraManager_AvailabilityCallback();
		
		// Methods
		void onCameraAccessPrioritiesChanged();
		void onCameraAvailable(jstring arg0);
		void onCameraUnavailable(jstring arg0);
	};
} // namespace android::hardware::camera2

