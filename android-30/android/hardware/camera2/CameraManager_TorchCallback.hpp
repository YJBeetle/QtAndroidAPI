#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::hardware::camera2
{
	class CameraManager_TorchCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CameraManager_TorchCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CameraManager_TorchCallback(QAndroidJniObject obj);
		
		// Constructors
		CameraManager_TorchCallback();
		
		// Methods
		void onTorchModeChanged(jstring arg0, jboolean arg1);
		void onTorchModeUnavailable(jstring arg0);
	};
} // namespace android::hardware::camera2

