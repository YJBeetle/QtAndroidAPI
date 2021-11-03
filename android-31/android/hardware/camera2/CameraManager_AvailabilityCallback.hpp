#pragma once

#include "../../../JObject.hpp"

class JString;

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
		void onCameraAvailable(JString arg0);
		void onCameraUnavailable(JString arg0);
		void onPhysicalCameraAvailable(JString arg0, JString arg1);
		void onPhysicalCameraUnavailable(JString arg0, JString arg1);
	};
} // namespace android::hardware::camera2

