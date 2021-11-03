#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::hardware::camera2
{
	class CameraManager_TorchCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CameraManager_TorchCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CameraManager_TorchCallback(QAndroidJniObject obj);
		
		// Constructors
		CameraManager_TorchCallback();
		
		// Methods
		void onTorchModeChanged(JString arg0, jboolean arg1);
		void onTorchModeUnavailable(JString arg0);
	};
} // namespace android::hardware::camera2

