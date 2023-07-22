#pragma once

#include "../../JObject.hpp"

namespace android::hardware
{
	class Camera_CameraInfo : public JObject
	{
	public:
		// Fields
		static jint CAMERA_FACING_BACK();
		static jint CAMERA_FACING_FRONT();
		jboolean canDisableShutterSound();
		jint facing();
		jint orientation();
		
		// QJniObject forward
		template<typename ...Ts> explicit Camera_CameraInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Camera_CameraInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Camera_CameraInfo();
		
		// Methods
	};
} // namespace android::hardware

