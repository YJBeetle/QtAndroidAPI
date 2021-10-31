#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::hardware::camera2
{
	class CameraDevice;
}
namespace android::hardware::camera2
{
	class CameraExtensionSession_ExtensionCaptureCallback;
}
namespace android::hardware::camera2
{
	class CaptureRequest;
}

namespace android::hardware::camera2
{
	class CameraExtensionSession : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CameraExtensionSession(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CameraExtensionSession(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint capture(android::hardware::camera2::CaptureRequest arg0, __JniBaseClass arg1, android::hardware::camera2::CameraExtensionSession_ExtensionCaptureCallback arg2);
		void close();
		android::hardware::camera2::CameraDevice getDevice();
		jint setRepeatingRequest(android::hardware::camera2::CaptureRequest arg0, __JniBaseClass arg1, android::hardware::camera2::CameraExtensionSession_ExtensionCaptureCallback arg2);
		void stopRepeating();
	};
} // namespace android::hardware::camera2

