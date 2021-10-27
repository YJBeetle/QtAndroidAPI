#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaRecorder;
}

namespace android::media
{
	class MediaRecorder_VideoEncoder : public __JniBaseClass
	{
	public:
		// Fields
		static jint DEFAULT();
		static jint H263();
		static jint H264();
		static jint HEVC();
		static jint MPEG_4_SP();
		static jint VP8();
		
		MediaRecorder_VideoEncoder(QAndroidJniObject obj);
		// Constructors
		MediaRecorder_VideoEncoder() = default;
		
		// Methods
	};
} // namespace android::media

