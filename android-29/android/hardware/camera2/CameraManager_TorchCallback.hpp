#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::hardware::camera2
{
	class CameraManager_TorchCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		CameraManager_TorchCallback(QAndroidJniObject obj);
		// Constructors
		CameraManager_TorchCallback();
		
		// Methods
		void onTorchModeChanged(jstring arg0, jboolean arg1);
		void onTorchModeChanged(const QString &arg0, jboolean arg1);
		void onTorchModeUnavailable(jstring arg0);
		void onTorchModeUnavailable(const QString &arg0);
	};
} // namespace android::hardware::camera2

