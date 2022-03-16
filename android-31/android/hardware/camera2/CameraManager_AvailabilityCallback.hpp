#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::hardware::camera2
{
	class CameraManager_AvailabilityCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CameraManager_AvailabilityCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CameraManager_AvailabilityCallback(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		CameraManager_AvailabilityCallback();
		
		// Methods
		void onCameraAccessPrioritiesChanged() const;
		void onCameraAvailable(JString arg0) const;
		void onCameraUnavailable(JString arg0) const;
		void onPhysicalCameraAvailable(JString arg0, JString arg1) const;
		void onPhysicalCameraUnavailable(JString arg0, JString arg1) const;
	};
} // namespace android::hardware::camera2

