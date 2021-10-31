#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::hardware::camera2
{
	class CameraManager_AvailabilityCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		CameraManager_AvailabilityCallback(QAndroidJniObject obj);
		// Constructors
		CameraManager_AvailabilityCallback();
		
		// Methods
		void onCameraAccessPrioritiesChanged();
		void onCameraAvailable(jstring arg0);
		void onCameraUnavailable(jstring arg0);
	};
} // namespace android::hardware::camera2

