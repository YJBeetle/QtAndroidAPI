#pragma once

#include "../../../JObject.hpp"


namespace android::hardware::camera2
{
	class CameraManager_TorchCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CameraManager_TorchCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CameraManager_TorchCallback(QJniObject obj);
		
		// Constructors
		CameraManager_TorchCallback();
		
		// Methods
		void onTorchModeChanged(jstring arg0, jboolean arg1);
		void onTorchModeUnavailable(jstring arg0);
	};
} // namespace android::hardware::camera2

