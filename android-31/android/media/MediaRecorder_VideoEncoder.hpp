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
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaRecorder_VideoEncoder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaRecorder_VideoEncoder(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

