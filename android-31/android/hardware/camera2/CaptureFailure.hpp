#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::camera2
{
	class CaptureRequest;
}
class JString;

namespace android::hardware::camera2
{
	class CaptureFailure : public JObject
	{
	public:
		// Fields
		static jint REASON_ERROR();
		static jint REASON_FLUSHED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CaptureFailure(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CaptureFailure(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jlong getFrameNumber();
		JString getPhysicalCameraId();
		jint getReason();
		android::hardware::camera2::CaptureRequest getRequest();
		jint getSequenceId();
		jboolean wasImageCaptured();
	};
} // namespace android::hardware::camera2

