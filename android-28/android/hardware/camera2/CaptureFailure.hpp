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
		
		// QJniObject forward
		template<typename ...Ts> explicit CaptureFailure(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CaptureFailure(QJniObject obj);
		
		// Constructors
		
		// Methods
		jlong getFrameNumber();
		jint getReason();
		android::hardware::camera2::CaptureRequest getRequest();
		jint getSequenceId();
		jboolean wasImageCaptured();
	};
} // namespace android::hardware::camera2

