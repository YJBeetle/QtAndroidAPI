#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::hardware::camera2
{
	class CaptureRequest;
}

namespace android::hardware::camera2
{
	class CaptureFailure : public __JniBaseClass
	{
	public:
		// Fields
		static jint REASON_ERROR();
		static jint REASON_FLUSHED();
		
		CaptureFailure(QAndroidJniObject obj);
		// Constructors
		CaptureFailure() = default;
		
		// Methods
		jlong getFrameNumber();
		jstring getPhysicalCameraId();
		jint getReason();
		QAndroidJniObject getRequest();
		jint getSequenceId();
		jboolean wasImageCaptured();
	};
} // namespace android::hardware::camera2

