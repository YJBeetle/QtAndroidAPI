#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::camera2
{
	class CaptureRequest;
}

namespace android::hardware::camera2
{
	class CaptureFailure : public JObject
	{
	public:
		// Fields
		static jint REASON_ERROR();
		static jint REASON_FLUSHED();
		
		// QJniObject forward
		template<typename ...Ts> explicit CaptureFailure(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CaptureFailure(QJniObject obj);
		
		// Constructors
		
		// Methods
		jlong getFrameNumber() const;
		jint getReason() const;
		android::hardware::camera2::CaptureRequest getRequest() const;
		jint getSequenceId() const;
		jboolean wasImageCaptured() const;
	};
} // namespace android::hardware::camera2

