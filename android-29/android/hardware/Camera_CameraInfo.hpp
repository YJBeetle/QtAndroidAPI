#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::hardware
{
	class Camera_CameraInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint CAMERA_FACING_BACK();
		static jint CAMERA_FACING_FRONT();
		jboolean canDisableShutterSound();
		jint facing();
		jint orientation();
		
		Camera_CameraInfo(QAndroidJniObject obj);
		// Constructors
		Camera_CameraInfo();
		
		// Methods
	};
} // namespace android::hardware

