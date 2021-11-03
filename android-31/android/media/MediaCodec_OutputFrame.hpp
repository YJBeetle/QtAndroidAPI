#pragma once

#include "../../JObject.hpp"

namespace android::hardware
{
	class HardwareBuffer;
}
namespace android::media
{
	class MediaCodec_LinearBlock;
}
namespace android::media
{
	class MediaFormat;
}

namespace android::media
{
	class MediaCodec_OutputFrame : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCodec_OutputFrame(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodec_OutputFrame(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getChangedKeys();
		jint getFlags();
		android::media::MediaFormat getFormat();
		android::hardware::HardwareBuffer getHardwareBuffer();
		android::media::MediaCodec_LinearBlock getLinearBlock();
		jlong getPresentationTimeUs();
	};
} // namespace android::media

